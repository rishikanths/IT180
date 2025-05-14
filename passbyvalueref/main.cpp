#include <iostream>
#include <cmath>
using namespace std;
void swapByValues(int a, int b){
	int temp = a;
	a= b;
	b = temp;
	cout<<"Inside the swapping function, a: "<<a<<", b:"<<b<<endl;
}
void swapByValues(double a, double b){
	int temp = a;
	a= b;
	b = temp;
	cout<<"Inside the swapping function, a: "<<a<<", b:"<<b<<endl;
}

void swapByReference(int& a,int &b){
	int temp = a;
	a= b;
	b = temp;
	cout<<"Inside the swapping function by reference, a: "<<a<<", b:"<<b<<endl;
}
/*
 * As reference can change the value of the variable, you have to be careful handling them
 * If you want to make sure the reference values are not changed make them constant
 */
void ConstReference(const int& a,const int& b){
	// This cannot happen in this function, as you are modifying the value of var2 through
	// its reference.
	//b = 50;
	int temp = a*b;
	cout<<"Inside the const reference function - "<<temp<<endl;
}
int main(){
	int var1 = 10;
	int var2 = 20;
	ConstReference(var1,var2);
	int& temp = var1;
	cout<<"Accessing Var1 via ref: "<<temp<<endl;
	cout<<"Before swapping, var1: "<<var1<<", var2:"<<var2<<endl;
	swapByValues(var1,var2);
	cout<<"After swapping, var1: "<<var1<<", var2:"<<var2<<endl;

	cout<<"______________________________________________________"<<endl;

	cout<<"Before swapping, var1: "<<var1<<", var2:"<<var2<<endl;
	swapByReference(var1,var2);
	cout<<"After swapping, var1: "<<var1<<", var2:"<<var2<<endl;

	cout<<"______________________________________________________"<<endl;


	return 0;
}
