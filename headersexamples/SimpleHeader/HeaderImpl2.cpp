#include "Header.h"

AddNumbers::AddNumbers() {
	cout<<"Calling Header Example constructor"<<endl;
	num1 = rand()%300+1;
	num2 = rand()%400+1;
}

int AddNumbers::add(int x, int y){
	cout<<"Calling Add using Bitwise"<<endl;
	while(y!=0){
		int carry = x & y;
		x = x^y;
		y = carry << 1;
	}
}
