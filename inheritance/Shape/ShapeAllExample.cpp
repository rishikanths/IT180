/*
 * AbstractExample.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: rsaripa
 */

#include <iostream>
using namespace std;

class Shape{
protected:
	double width;
	double height;
public:
	virtual double getArea()=0;
	void getDesc(){
		cout<<"This is a shape"<<endl;
	}
	Shape(double a, double b){
		width = a;
		height = b;
	}
	virtual ~Shape(){
		cout<<"Destroying Shape"<<endl;
	}
};
class Triangle:public Shape{
public:
	double getArea(){
		return .5*width* height;
	}
	Triangle(double a,double b):Shape(a,b){
	}
	~Triangle(){}
};

class Rectangle:public Shape{
public:
	double getArea(){
		return width* height;
	}
	Rectangle(double a,double b):Shape(a,b){
	}
	~Rectangle(){
		cout<<"Destroyed Rectangle"<<endl;
	}
};
class Rhombus:public Shape{
protected:
	double length;
public:
	double getArea(){
		return width* height*length;
	}
	Rhombus(double a,double b,double c):Shape(a,b){
		length=c;
	}
	~Rhombus(){
		cout<<"Destroyed Rhombus"<<endl;
	}
};

int main() {

	Rectangle* r = new Rectangle(10,20);
	cout <<"Rectangle: "<< r->getArea() << endl;
	delete r;

	Rhombus* c  = new Rhombus(13.4,10.2,14.5);
	cout << "Rhombus: "<< c->getArea() << endl;
	delete c;



  /*Shape* shape;
	shape = new Rect(10.2,30.3);
	cout <<"Rectangle: "<< shape->getArea() << endl;
	delete shape;

	shape  = new Columbus(13.4,10.2,14.5);
	cout << "Columbus: "<< shape->getArea() << endl;
	delete shape;

	shape = new Triangle(10.23,34.5);
  cout << "Triangle: "<< shape->getArea() << endl;
	delete shape;
	*/
  return 0;
}
