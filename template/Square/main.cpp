#include<iostream>
#include<string>
using namespace std;

template <class X>
class Square{
private:
	X side; //  string side
public:
	Square(X side){ // Square ( string side)
		this->side = side;
	}
	void getArea(){
		cout<<"Area of Square - "<<side*side<<endl;
	}
};

int main(){

	//Square<string> sString("23");
	//sString.getArea();

	// Square* s = new Square (20)
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
