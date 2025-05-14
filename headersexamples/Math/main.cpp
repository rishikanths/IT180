
#include <iostream>
#include "Add.h"
#include "Multiply.h"

using namespace std;
using namespace Add;

int main(){

	AddClass a(10,20);
	MultiplyClass m(20,10);
	cout<<"Sum - "<<a.add()<<endl;
	cout<<"Product - "<<m.multiply()<<endl;
	return 0;
}
