/**
 * examplePointer
 */

#include <iostream>
using namespace std;
// a= 0X123; a = 0X345
void swap(int* a, int* b){
	int temp = *a;// a is a pointer to x. *a - > go to address of x and get its values
	*a = *b;// a = 20;
	*b = temp;
}
void swap2(int** a, int ** b){
	int* temp = *a;
	**a = **b;
	**b = *temp;
}
int main() {

	int x = 10;
	int y = 20;
	cout << "Before Swap X = " << x<<" , Y = " << y<<endl;
	swap(&x,&y);
	cout << "After  Swap X = " << x<<" , Y = " << y<<endl;
	int z = 30;
	int w = 40;
	int* zPtr = &z;
	int* wPtr = &w;
	cout << "Before Swap Z = " << z<<" , W = " << w<<endl;
	swap2(&zPtr, &wPtr);
	cout << "After Swap Z = " << z<<" , W = " << w<<endl;
	return 0;
}
