/*
 * InheritanceExample.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: rsaripa
 */

#include<iostream>
using namespace std;

class Polygon {
private:
	double area;
protected:
	int width, height;
public:
	void setValues(int a, int b) {
		width = a;
		height = b;
	}
};

class Rectangle: public Polygon {
public:
	int area() {
		return width * height;
	}
};

class Triangle: public Polygon {
public:
	int area() {
		return width * height / 2;
	}
	void setWidth(int w){
		width = w;
	}
	void setHeight(int h){
		height = h;
	}
};
int main () {
  Polygon poly;
  Rectangle rect;
  Triangle trgl;
  poly.setValues(10,20);
  rect.setValues(4,5);
	trgl.setWidth(10);
	trgl.setHeight(2);
  trgl.setValues (4,5);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';

  Rectangle* r = new Rectangle;
  r->setValues(10,20);

  cout << r->area() << '\n';

  delete r;

  return 0;
}
