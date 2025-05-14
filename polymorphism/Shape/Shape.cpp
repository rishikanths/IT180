#include <iostream>
using namespace std;
const double PI = 3.141;

class Shape{
	public:
	virtual void area()=0; // pure virtual function
};
class Rectangle:public Shape{
	public:
		int w, h;
		Rectangle (int w, int h): w(w), h(h){}
		void area(){
			cout<<"Area of Rectangle is -  "<<w*h<<endl;
	}
};
class Square:public Rectangle{
	public:
		int s;
		Square (int s):Rectangle(s,s), s(s){}
};
class Circle:public Shape{
	public:
		int radius;
		Circle (int r): radius(r){}
		void area(){
			cout<<"Area of Circle is -  "<<radius*radius*PI<<endl;
	}
};
class Triangle:public Shape{
	public:
		int w, h;
		Triangle (int w, int h): w(w), h(h){}
		void area(){
			cout<<"Area of Triangle is -  "<<w*h/2<<endl;
	}
};

int main(){
	Shape* s;

	s = new Rectangle(10, 10);
	s->area();
	delete s;
	s = new Circle(10);
	s->area();
	delete s;
	s = new Triangle(10,20);
	s->area();
	delete s;

	s = new Square(100);
	s->area();
	delete s;

	Rectangle* r;
	r = new Square(20);
	r->area();
	delete r;


	return 0;
}
