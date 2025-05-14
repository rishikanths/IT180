/*
 * DynamicMemory.cpp
 *
 *  Created on: Oct 15, 2016
 *      Author: rsaripa
 */

#include <iostream>
#include <stdlib.h>
using std::endl;using std::cout;using std::cin;
int main(){

	int* ptr;
	ptr = new int;	
	cout<<"Created a pointer with memory :"<<&ptr<<endl;
	cout<<"Alocated to save one int at :"<<ptr<<endl;
	*ptr = 100;
	delete ptr;
	
	int size = 0;
	cout<<"How much memory do you want: ";cin>>size; //size = 20 or 2000 or 30000
	int* dynArray = nullptr;
	dynArray = new int[size]; //size = 30
	for(int i=0;i<size;i++){
		dynArray[i] = rand()%100;
	}
	for(int i=0;i<size;i++){
		cout<<dynArray[i]<<" , ";
	}
	cout<<endl;
	cout<<"Printing the array name"<<dynArray<<endl;
	cout<<"Printing the 0th Index address of the dynamic array"<<&dynArray[0]<<endl;
	
	delete [] dynArray;

	return 0;
}
