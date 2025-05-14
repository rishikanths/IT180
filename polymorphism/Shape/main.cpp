#include "rectHeader.h"
#include "circleHeader.h"

int main(){
	Shape* s;

	s = new Rectangle(10, 10);
	s->area();
	delete s;

	s = new Circle(10);
	s->area();
	delete s;

	return 0;
}
