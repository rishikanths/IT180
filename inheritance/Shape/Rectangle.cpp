#include "Rectangle.h"
	double Rect::getArea(){
		return width* height;
	}
	Rect::Rect(double a,double b):Shape(a,b){
	}
	Rect::~Rect(){
		cout<<"Destroyed Rect"<<endl;
	}
