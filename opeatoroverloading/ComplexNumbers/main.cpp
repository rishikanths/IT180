#include "ComplexNumber.h"
using std::cout;
using std::endl;


int main() {
    
    ComplexNumber c1(3, 4);
    ComplexNumber c2(1, 2);
    ComplexNumber c3(1, 2);
    
	ComplexNumber* cAdd = c1+c2;
	cout<<"Adding "<<c1.toString()<<" and "<<c2.toString()<<" results in : "<<(*cAdd).toString()<<endl;

	ComplexNumber* cSub = c1-c2;
	cout<<"Subtracting "<<c1.toString()<<" and "<<c2.toString()<<" results in : "<<(*cSub).toString()<<endl;

	ComplexNumber* cMul = c1*c2;
	cout<<"Multiplying "<<c1.toString()<<" and "<<c2.toString()<<" results in : "<<(*cMul).toString()<<endl;

	if(c2 == c3)
		cout<<"The complex numbers "<<c2.toString()<<" and "<<c3.toString()<<" are equal."<<endl;

	delete cAdd;
	delete cSub;
	delete cMul;

    return 0;
}
