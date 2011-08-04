CC=gcc
CFLAGS=-I.
DEPS=
OBJ=radio.o

REMOVE = rm -f

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

radio: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

Release: radio

cleanRelease:
