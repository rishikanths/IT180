/**
 * examplePointer
 */

#include <iostream>

using namespace std;

int main() {

	int x = 10;
	int ab = 20;
	int *y = &x; // &x - >address of variable x;

	*y = 30;
	cout<<"Changed X values using Y: "<<x<<endl;
	// = int * y = &x; int *y = &x;
	int* temp = nullptr; // only C++11
	int* temp2 = NULL; // Before C++11

	int &ref = x;

	cout<<"Value of Ref:  " << ref<<endl;
	cout<<"Address of Ref:   "<<&ref<<endl;
	cout<<"Address of x:   "<<&x<<endl;
	cout<<"Address of Pointer Y:   "<<&y<<endl;

	cout<<endl;
	cout<<endl;
	cout << "Address of X = " << &x << endl;
	cout << "Address of X = " << y << endl;
	cout << "Value at address " << y << " (pointer y) is - " << *y << endl;

	int array[5] = { 1, 2, 3, 4, 5 };
	int* p = array;// int *p = &array;
	cout << "Address of array = " << array << endl;
	cout << "Value of array = " << *array << endl;
	cout << "Value at array[1] is: " << p[1] << "or array[1]: "<<array[1]<<endl;

	/**
	 * Pointer to pointer
	 */
	int b = 100;
	int* c = &b;
	int** d = &c;
	int*** e = &d;

	cout<<endl;
	cout<<endl;

	cout << "Value at address " << d << " (pointer d pointing to c) is - " << *d << " which is values of c: "<<c<<endl;
	cout << "Value at address " << d << " (pointer d pointing to c which is pointing to b) is - " << **d << endl;


	/*
	 * Can change the pointer reference, but not the value at the pointed address
	 * Thus, *z = 30 is not allowed
	 */
	const int* z = &x;
	cout << "Value at address " << z << " (const pointer z pointing to X) is - " << *z << endl;
	//*z = 30;
	int w = 30;
	z = &w;
	cout << "Value at address " << z << " (const pointer z pointing to w) is - " << *z << endl;

	/*
	 * Cannot change the pointer reference, but can change the value at the pointed address
	 * Thus, *z = &w is not allowed
	 */
	int* const v = &x;
	cout << "Value at address " << v << " (const pointer v pointing to x) is - " << *v << endl;
	*v = 60;
	//int w = 30;
	//v = &w;
	cout << "Value at address " << v << " (const pointer z pointing to x) is - " << *v << endl;
	const int* const t = &x;
	//*t = 40;
	// int abc = 400;
	// t = &abc;
	return 0;
}
