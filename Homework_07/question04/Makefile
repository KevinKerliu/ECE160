#Definitions for constants
CC=gcc
CFLAGS=-I.

#This will create your final output using .o compiled files
make: main.o word.o tree.o
	$(CC) $(CFLAGS) -o main main.o word.o tree.o

#This will compile .o
comp.o: word.c word.h
	$(CC) $(CFLAGS) -c word.c

#This will compile .o
player.o: tree.c tree.h
	$(CC) $(CFLAGS) -c tree.c

#This will compile main.c and its dependencies
main.o: main.c global.h tree.h word.h
	$(CC) $(CFLAGS) -c main.c

#This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe
