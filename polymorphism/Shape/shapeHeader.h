#ifndef SHAPE
#define SHAPE

#include <iostream>
using namespace std;

const double PI = 3.141;

class Shape{
	public:
	virtual void area()=0; // pure virtual function
};

#endif
