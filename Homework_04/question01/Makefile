# Definitions for constants
CC=gcc
CFLAGS=-I.

# This will create your final output using .o compiled files
make: main.o board.o compMove.o win.o game.o gamePlay.o playerMove.o
	$(CC) $(CFLAGS) -o main main.o board.o compMove.o win.o game.o gamePlay.o playerMove.o

# This will compile board.o
board.o: board.c board.h
	$(CC) $(CFLAGS) -c board.c

# This will compile compMove
compMove.o: compMove.c compMove.h
	$(CC) $(CFLAGS) -c compMove.c

# This will compile win.o
win.o: win.c win.h
	$(CC) $(CFLAGS) -c win.c

# This will compile game.o
game.o: game.c game.h
	$(CC) $(CFLAGS) -c game.c

# This will compile gamePlay.o
gamePlay.o: gamePlay.c gamePlay.h
	$(CC) $(CFLAGS) -c gamePlay.c

# This will compile playerMove.o
playerMove.o: playerMove.c playerMove.h
	$(CC) $(CFLAGS) -c playerMove.c

# This will compile main.c and its dependencies
main.o: main.c main.h board.h compMove.h win.h game.h gamePlay.h playerMove.h
	$(CC) $(CFLAGS) -c main.c

# This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe
