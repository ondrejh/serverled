#! /usr/bin/env python3
'''\
Serial communication module for serverleds hw
'''

import serial
#import timeit
import time
#import random
#import string
#import glob

PORT = '/dev/ttyUSB0'
BAUDRATE = 115200

LINE_END = '\n'
#INFO_COMMAND = 'i'
READ_COMMAND = 'r'
#SET_COMMAND = 's'

def command(port,cmd):
    ''' send command and receive answer '''
    #check input sanity
    if type(cmd) != str:
        return
    if type(port) != serial.serialposix.Serial:
        return
    #build command
    msg = '{}{}'.format(cmd,LINE_END).encode()
    #transmitt command
    port.write(msg)
    #read & return answer
    return port.readline().strip().decode('ascii')

def readled(port,led):
    ''' read one specified led status '''
    #check input sanity#
    if type(led)!=int:
        return
    if led<0x0 or led>0xF:
        return
    if type(port) != serial.serialposix.Serial:
        return
    #build and use command#
    msg = '{}{:X}'.format(READ_COMMAND,led)
    answ = command(port,msg)
    #disasembly answer & return it#
    if len(answ)==len('r123'):
        return({'green':int('0x{}'.format(answ[2:3]),0),'red':int('0x{}'.format(answ[3:4]),0)})

def readleds(port):
    ''' read all leds '''
    #check input sanity#
    if type(port) != serial.serialposix.Serial:
        return
    #build and use command
    msg = '{}'.format(READ_COMMAND)
    answ = command(port,msg)
    #disasembly answer and return it
    if len(answ)==len('r00112233445566778899AABBCCDDEEFF'):
        leds = []
        for i in range(0,16):
            leds.append({i:{'green':int('0x{}'.format(answ[1+i*2:2+i*2]),0),'red':int('0x{}'.format(answ[2+i*2:3+i*2]),0)}})
        return leds

if __name__ == '__main__':
    #open port
    with serial.Serial(PORT,interCharTimeout=0.1,timeout=0.2,baudrate=BAUDRATE) as serial_port:
        time.sleep(2) #wait for arduino bootloader recovery
        print(command(serial_port,'s123'))
        print(readled(serial_port,1))
        print(readleds(serial_port))

''' TODO 5.11.2011
set all and set one command '''
