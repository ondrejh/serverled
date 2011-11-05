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
#BAUDRATE = 115200
BAUDRATE = 57600
#BAUDRATE = 9600

LINE_END = '\n'
#INFO_COMMAND = 'i'
READ_COMMAND = 'r'
SET_COMMAND = 's'

INPUT_SANITY_ERROR = 'syntax error'
OK = 'ok'
NO_ANSWER = 'no answer'

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
        return INPUT_SANITY_ERROR
    if led<0x0 or led>0xF:
        return INPUT_SANITY_ERROR
    if type(port) != serial.serialposix.Serial:
        return INPUT_SANITY_ERROR
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
        return INPUT_SANITY_ERROR
    #build and use command
    msg = '{}'.format(READ_COMMAND)
    answ = command(port,msg)
    #disasembly answer and return it
    if len(answ)==len('r00112233445566778899AABBCCDDEEFF'):
        leds = []
        for i in range(0,16):
            leds.append({'green':int('0x{}'.format(answ[1+i*2:2+i*2]),0),'red':int('0x{}'.format(answ[2+i*2:3+i*2]),0)})
        return leds

def setled(port,led,status):
    ''' set one led status '''
    #check input sanity
    if type(port) != serial.serialposix.Serial:
        return INPUT_SANITY_ERROR
    if (type(led)!=int) or (type(status)!=dict):
        return INPUT_SANITY_ERROR
    green = 0
    red = 0
    if ('green' in status) and (type(status['green'])==int) and (status['green'] in range(0,16)):
        green = status['green']
    if ('red' in status) and (type(status['red'])==int) and (status['red'] in range(0,16)):
        red = status['red']
    if led in range(0,16):
        cmd = '{}{:X}{:X}{:X}'.format(SET_COMMAND,led,green,red)
        answ = command(serial_port,cmd)
        if answ == cmd:
            return OK
        else:
            return NO_ANSWER
    else:
        return INPUT_SANITY_ERROR

def setleds(port,leds):
    ''' set all leds '''
    #check input sanity
    if type(port)!=serial.serialposix.Serial:
        return INPUT_SANITY_ERROR
    if (type(leds)!=list) or (len(leds)!=16):
        return INPUT_SANITY_ERROR
    for i in range(0,16):
        if (type(leds[i])!=dict) or \
           ('green' not in leds[i]) or ('red' not in leds[i]) or \
           (leds[i]['green'] not in range(0,16)) or (leds[i]['red'] not in range(0,16)):
            return INPUT_SANITY_ERROR
    cmd = '{}'.format(SET_COMMAND)
    for i in range(0,16):
        cmd+=('{:X}{:X}'.format(leds[i]['green'],leds[i]['red']))
    answ = command(serial_port,cmd)
    if answ == cmd:
        return OK
    else:
        return NO_ANSWER

def knightrider(port,cycles = 5,speed = 1):
    ''' make knight rider wave '''
    leds = []
    tdelay = 1/(32*speed)

    ''' decay subfunction '''
    def decay(d):
        if d>10:
            return 10
        if d>7:
            return 7
        if d>5:
            return 5
        if d>3:
            return 3
        if d>2:
            return 2
        if d>1:
            return 1
        return 0

    def onewave():
        ''' one wave output '''
        for ptr in range(0,15):
            for i in range(0,16):
                leds[i]['red']=decay(leds[i]['red'])
            leds[ptr]['red']=0xF
            setleds(port,leds)
            time.sleep(tdelay)
        for ptr in range(0,15):
            for i in range(0,16):
                leds[i]['red']=decay(leds[i]['red'])
            leds[15-ptr]['red']=0xF
            setleds(port,leds)
            time.sleep(tdelay)        

    #check input sanity
    if type(port)!=serial.serialposix.Serial:
        return INPUT_SANITY_ERROR
        
    leds = readleds(port)
    for i in range(0,16):
        leds[i]['green']=0

    for cls in range(0,cycles):
        onewave()

    leds[0]['red']=0xF
    for clk in range(0,8):
        for i in range(0,16):
            leds[i]['red']=decay(leds[i]['red'])
        setleds(port,leds)
        time.sleep(tdelay)
    
if __name__ == '__main__':
    #open port
    with serial.Serial(PORT,interCharTimeout=0.1,timeout=0.2,baudrate=BAUDRATE) as serial_port:
        time.sleep(2) #wait for arduino bootloader recovery
        '''print(setled(serial_port,1,{'green':0x01,'red':0x02}))
        leds = readleds(serial_port)
        leds[0xA]['green']=0x9
        setleds(serial_port,leds)
        time.sleep(3)'''
        knightrider(serial_port,speed=0.5)

''' TODO 5.11.2011
set all and set one command ... done'''

