CC=g++
FLAGS=-std=c++11 -c
OUT=out
VERB=--verbose
all: money main
	$(CC) main.o Money.o -o $(OUT)
money:
	$(CC) $(VERB) $(FLAGS) Money.cpp
main:
	$(CC) $(FLAGS) main.cpp
clean:
	rm -f *.o out
