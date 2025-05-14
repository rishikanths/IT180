#include "Header.h"
#include "Header.h"
AddNumbers::AddNumbers() {
	cout<<"Calling Header Example constructor"<<endl;
	num1 = rand()%100+1;
	num2 = rand()%200+1;
}

int AddNumbers::add(int x, int y){
	return x+y;
}
