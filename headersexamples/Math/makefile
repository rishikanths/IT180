#variable=value
CC=g++
OUT=output
COMP=-c -std=c++11
VERB=-v
#Rule Name: Dependencies
all:AddSource MultiplySource SubtractSource Main
	$(CC) AddSource.o MultiplySource.o SubtractSource.o main.o -o $(OUT)
	./$(OUT)
AddSource:
	$(CC) $(COMP) $(VERB) AddSource.cpp
MultiplySource:
	$(CC) $(COMP) MultiplySource.cpp
SubtractSource:
	$(CC) $(COMP) SubtractSource.cpp
Main:
	$(CC) $(COMP) main.cpp
clean:
	rm *.o $(OUT)
