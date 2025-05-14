#include "Multiply.h"
#include "Subtract.h"
using namespace Add;

MultiplyClass::MultiplyClass(int x, int y){
	c = x;
	d = y;

}

int MultiplyClass::multiply(){
	SubtractClass s(c,d);
	int temp = s.subtract();
	return (c*d)*temp;
}
