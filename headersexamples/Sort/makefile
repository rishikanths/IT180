CC=g++
FLAGS=-std=c++11 -c -g
OUT=-o out
all: Bubble main
	$(CC) BubbleSort.o SortMain.o $(OUT)
Bubble:
	$(CC) $(FLAGS) BubbleSort.cpp
main:
	$(CC) $(FLAGS) SortMain.cpp

clean:
	rm *.o out
