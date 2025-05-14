#include "Library1.h"
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using namespace Library1; // import Library1.*;
using namespace Library1::Library11; // import Library1.Library11.*;
using Library1::Library11::getArea; // import Library1.Library11.getArea;
int main(){
	cout<<"Area: "<<getArea(10,20)<<endl;
	cout<<"Area: "<<getSurfaceArea(10,20,3)<<endl;
	//cout<<"Area: "<<getSurfaceArea(20.0,2.12,2.34)<<endl;
}
