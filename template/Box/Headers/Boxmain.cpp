#include "Box.h"
using namespace BoxExample;

int main(){
	//    N     W    H     L
	Box<string,int,double,int> box1("candy",20,20.12,20);
	box1.getVolume();
	//     N    W    H     L
	Box<string,int,double,int> box3(20,20.12,20);
	box3.getVolume();

	Box<string, double, double, float> box6 (20.34,34.56, 1234.45f);

	Box<string,double,double,int>* box2 = new Box<string,double,double,int>("candy",2,20.12,10);
	box2->getVolume();

	delete box2;
}
