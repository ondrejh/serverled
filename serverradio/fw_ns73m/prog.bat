avrdude -p m328p -c arduino -P COM3 -b 57600 -e -U flash:w:bin/Release/ns73m.elf.hex
