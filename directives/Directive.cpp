#include <iostream>
#define SIZE 20
#ifndef PI
#define PI 3.141
#endif

#ifdef PI
#define PI2 PI*2 //an expression
#endif

#ifndef PI
#error Cannot compile
#endif

using namespace std;

int main(){
	int array[SIZE];
	cout<<"Size of Array is "<<SIZE<<endl;
	cout<<"PI - "<<PI<<endl;
	cout<<"PI*2 - "<<PI2<<endl;
	return 0;
}
