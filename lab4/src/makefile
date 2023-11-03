CC=gcc
CFLAGS=-I.

all: parallel_min_max create_zombie_process process_memory parallel_sum

parallel_min_max : utils.o find_min_max.o utils.h ../../lab3/src/find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o ../../lab3/src/parallel_min_max.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h ../../lab3/src/find_min_max.h
	$(CC) -o find_min_max.o -c ../../lab3/src/find_min_max.c $(CFLAGS)

create_zombie_process :
	$(CC) -o create_zombie_process zombie.c $(CFLAGS)

process_memory:
	$(CC) -o process_memory process_memory.c $(CFLAGS)

parallel_sum: utils.o lib_find_sum.a utils.h find_sum.h
	$(CC) -c parallel_sum.c -o parallel_sum.o
	$(CC) parallel_sum.o utils.o -pthread -L../lib -l_find_sum -o parallel_sum

lib_find_sum.a: find_sum.o
	ar rcs ../lib/lib_find_sum.a find_sum.o

find_sum.o: find_sum.h
	$(CC) -o find_sum.o -c -fPIC find_sum.c

clean :
	rm utils.o find_min_max.o parallel_min_max create_zombie_process parallel_sum process_memory parallel_sum.o find_sum.o
