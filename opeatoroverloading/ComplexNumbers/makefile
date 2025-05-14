# This is a variable
FLAG=-c -std=c++11
cc=gcc
all: ComplexNumber main
	$(cc) $(FLAG) main.o ComplexNumber.o -o out
main: main.cpp
	$(cc) $(FLAG) main.cpp
ComplexNumber: ComplexNumber.cpp
	$(cc) $(FLAG) ComplexNumber.cpp
clean:
	rm *.o out
