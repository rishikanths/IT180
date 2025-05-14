#include <iostream>
using namespace std;

class Cube{

private: 
	double side;
public: 
	Cube(double a);
	double getSurfaceArea();
	double getVolume();
	void setSide(double a);
};
