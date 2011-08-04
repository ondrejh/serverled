CC=gcc
CFLAGS=-I.
DEPS=
OBJ=radio.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

radio: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
