#include "Triangle.h"
double Triangle::getArea(){
	return .5*width* height;
}
Triangle::Triangle(double a,double b):Shape(a,b){
}
Triangle::~Triangle(){}
