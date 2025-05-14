#include "Rectangle.h";
#include "Columbus.h";

int main() {

	Rect* r = new Rect(10,20);
	cout <<"Rectangle: "<< r->getArea() << endl;
	delete r;

	Columbus* c  = new Columbus(13.4,10.2,14.5);
	cout << "Columbus: "<< c->getArea() << endl;
	delete c;
}
