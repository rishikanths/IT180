CC=g++ -W -std=c++11
all: Course Main
	$(CC) Course.o Main.o -o out

Course:
	$(CC) -c Course.cpp

Main:
	$(CC) -c Main.cpp

clean:
	rm *.o out
