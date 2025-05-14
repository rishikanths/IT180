#include "CopyConstructor.h"

int main() {

	Copy original(10);
	cout<<"Original numbers - "<<endl;
	original.display();

	Copy copyObj(original);
	cout<<"Copy Object numbers - "<<endl;
	copyObj.display();

	original.numbers[0] = 100;
	cout<<"Original numbers after changing - "<<endl;
	original.display();

	cout<<"Copy object numbers - "<<endl;
	copyObj.display();

	return 0;
}
