avrdude -p m328p -c arduino -P /dev/ttyUSB0 -b 57600 -e -U flash:w:bin/Release/ns73m.elf.hex
