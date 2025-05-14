#ifndef SHAPE
#define SHAPE
#include <iostream>
using namespace std;
class Shape{
protected:
	double width;
	double height;
public:
	virtual double getArea()=0;
	void getDesc();
	Shape(double a, double b);
	virtual ~Shape();
};
#endif
