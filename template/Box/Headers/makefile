CC=g++
COMP=-c -std=c++11
OUT=out

all: Box main
	$(CC) Box.o Boxmain.o -o $(OUT)
Box:
	$(CC) $(COMP) Box.cpp
main:
	$(CC) $(COMP) Boxmain.cpp
clean:
	rm -f *.o $(OUT)
