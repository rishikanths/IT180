CC=g++
COMP=-c -std=c++11
OUT=-o out

all: Rectangle Columbus Shape main
	$(CC) Shape.o Rectangle.o Columbus.o main.o $(OUT)
Rectangle:
	$(CC) $(COMP) Rectangle.cpp
Columbus:
	$(CC) $(COMP) Columbus.cpp
Shape:
	$(CC) $(COMP) Shape.cpp
main:
	$(CC) $(COMP) main.cpp
clean:
	rm *.o out
