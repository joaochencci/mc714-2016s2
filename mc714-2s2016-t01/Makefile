CC      = g++
CFLAGS  = -I/home/scale/g++Projects/gLib/

all: main clean

main: main.o
	$(CC) -o $@ $^

main.o: main.cpp main.h
	$(CC) -c $(CFLAGS) $<

.PHONY: clean cleanest

clean:
	rm *.o

cleanest: clean
	rm octhecdec