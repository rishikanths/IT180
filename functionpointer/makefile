all: IR.o main.o
	g++ -o out main.o IRCalculator.o

IR.o:IRCalculator.cpp IRCalculator.h
	g++ -c IRCalculator.cpp IRCalculator.h
main.o:main.cpp
	g++ -c main.cpp
clean:
	rm *.o out
