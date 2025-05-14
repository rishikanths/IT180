#include "Cube.h"

Cube::Cube(double a){
	this->side = a;
}

double Cube::getSurfaceArea(){
	return 6* side*side;
}
double Cube::getVolume(){
	return side*side*side;
}
void Cube::setSide(double a){
	side = a;
}

