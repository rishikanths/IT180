

#ifndef Rect
#define Rect

#include <iostream>
using namespace std;

#include "shapeHeader.h"

class Rectangle:public Shape{
	public:
		int w, h;
		Rectangle (int w, int h): w(w), h(h){}
		void area();
};

#endif
