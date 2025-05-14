#ifndef COPY_CONSTRUCTOR_H
#define COPY_CONSTRUCTOR_H
#include <iostream>
#include <stdlib.h>
using std::string;
using std::endl;
using std::cout;
using std::cin;

class Copy {

public:
	int* numbers;
	int size;
	Copy(int size);
	Copy(const Copy& c);
	~Copy();
	void display();
};
#endif
