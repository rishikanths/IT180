#include "Shape.h"
class Triangle:public Shape{
public:
	double getArea();
	Triangle(double a,double b);
	~Triangle();
};
