
#include "CopyConstructor.h"

void Copy:: display() {
	for (int i = 0; i < size; i++)
		cout << numbers[i] << "  ";
	cout<<endl;
}

Copy::Copy(int size) {
	this->size = size;
	numbers = new int[size];
	for (int i = 0; i < size; i++)
		numbers[i] = rand() % 10;
}
// Shallow Copying
/*Copy::Copy(const Copy& c) { // c is ref to Originial
	this->size = c.size; // copy size of original object to size of copyobj
	this->numbers = c.numbers; // copy the address from c to current object. Both c and current object numbers pointer are pointing to the same memory location
}*/
// Deep Copying
Copy::Copy(const Copy& c) {
	this->size = c.size; // coy size of original object to size of copyobj
	this->numbers = new int[c.size]; // Copy the size value from "c" to copyobj size value
	for (int i = 0; i < c.size; i++)
		this->numbers[i] = c.numbers[i]; // Copy the values from the "c" numbers location to copyobj number location
}

Copy::~Copy() {
	if(this->numbers != nullptr){
		delete[] numbers;
		cout<<"Destroying numbers"<<endl;
	}
	this->numbers = nullptr; // if you are using "nullptr" compile using c++11
	//this->numbers = NULL;
}
