CC=g++
CFLAGS=-std=c++11

all:Header.o main.o
	g++ -std=c++11 Header.o main.o -o out
Header.o:Header.cpp
	$(CC) $(CFLAGS) -c Header.cpp

#Header.o:HeaderImpl2.cpp
#	$(CC) $(CFLAGS) -c HeaderImpl2.cpp

main.o:main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm *.o out
