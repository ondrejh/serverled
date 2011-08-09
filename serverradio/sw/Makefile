CC=gcc
CFLAGS=-I.
DEPS=
OBJ=radio.o
TARGET=radio

REMOVE = rm -f

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

radio: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

Release: $(TARGET)

cleanRelease: $(TARGET)
	rm $(TARGET).o $(TARGET)
