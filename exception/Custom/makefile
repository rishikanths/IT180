CC=g++
CFLAGS=-std=c++11

all:Exception.o main.o
	$(CC) $(CFLAGS) Exception.o main.o -o out
Money.o:Exception.cpp
	$(CC) $(CFLAGS) -c Exception.cpp
Main.o:Main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm *.o out
