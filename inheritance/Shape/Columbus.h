#include "Shape.h"
class Columbus:public Shape{
protected:
	double length;
public:
	double getArea();
	Columbus(double a,double b,double c);
	~Columbus();
};
