CC=g++
CFLAGS=-std=c++11
all:CopyConstructor.o main.o
	$(CC) $(CFLAGS) CopyConstructor2.o main.o -o out
CopyConstructor.o:
	$(CC) $(CFLAGS) -c CopyConstructor2.cpp
main.o:
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm *.o out
