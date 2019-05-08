#Definitions for constants
CC=gcc
CFLAGS=-I.

#This will create your final output using .o compiled files
make: main.o comp.o player.o board.o
	$(CC) $(CFLAGS) -o main main.o comp.o player.o board.o

#This will compile .o
comp.o: comp.c comp.h
	$(CC) $(CFLAGS) -c comp.c

#This will compile .o
player.o: player.c player.h
	$(CC) $(CFLAGS) -c player.c

#This will compile .o
board.o: board.c board.h
	$(CC) $(CFLAGS) -c board.c

#This will compile main.c and its dependencies
main.o: main.c main.h comp.h board.h board.h
	$(CC) $(CFLAGS) -c main.c

#This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe
