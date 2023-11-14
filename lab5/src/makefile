CC=gcc
CFLAGS=-I. # для подключения библиотек

objects = factorial deadlock

all: $(objects)

factorial : ../../lab3/src/utils.h utils.o
	$(CC) -o factorial utils.o factorial.c -pthread $(CFLAGS)

deadlock: 
	$(CC) -o deadlock deadlock.c -pthread $(CFALGS)

utils.o : ../../lab3/src/utils.h
	$(CC) -o utils.o -c ../../lab3/src/utils.c $(CFLAGS)

clean :
	rm utils.o factorial deadlock mutex