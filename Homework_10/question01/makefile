# Definitions for constants
CC=g++
CFLAGS = -I. 

# This will create your final output using .o compiled files
make: main.o one.o two.o
	$(CC) $(CFLAGS) -o main main.o one.o two.o

main.o: main.cpp two.h
	$(CC) $(CFLAGS) -c main.cpp -o main.o

one.o: one.cpp one.h
	$(CC) $(CFLAGS) -c one.cpp -o one.o

two.o: two.cpp two.h
	$(CC) $(CFLAGS) -c two.cpp -o two.o
	
# This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe getStuff/*.o
