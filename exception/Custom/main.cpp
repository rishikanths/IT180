/*
 * exampleException.cpp
 *
 *  Created on: Oct 10, 2016
 *      Author: rsaripa
 */
#include<iostream>
#include "Exception.h"

void divide() throw (MyException);

int main(){
	try {
		divide();
	}
	catch(MyException e) { //catch the type of the value thrown
		cout<<e.getMessage()<<endl;
	}

	return 0;
};

void divide() throw (MyException) {

	cout<<"Enter the numerator: ";
	int numerator;
	cin>>numerator;

	cout<<"Enter the denominator: ";
	int denominator;
	cin>>denominator;

	if(denominator==0){
		MyException exe(string("denominator is zero"), numerator, denominator);
		throw exe; // throw any value
	}
	cout<<"Value: "<<numerator/denominator<<endl;
}
