#include "Square.h"

int main(){

	Square<int>* sIntPtr = new Square<int>(20);
	sIntPtr->getArea();
	delete sIntPtr;

	Square<int> sInt(10); // Square sInt(10);
	sInt.getArea();

	Square<double> sDouble(112.23);
	sDouble.getArea();

	Square<float> sFloat(1112.23234);
	sFloat.getArea();
}
