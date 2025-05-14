#ifndef CIRC
#define CIRC

#include <iostream>
using namespace std;

#include "shapeHeader.h"

class Circle:public Shape{
	public:
		int radius;
		Circle (int r): radius(r){}
		void area();
};


#endif
