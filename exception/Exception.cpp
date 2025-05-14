/*
 * 	Exception.cpp
 *
 *  Created on: Oct 10, 2016
 *      Author: rsaripa
 */
#include<iostream>

int main(){

	std::cout<<"Enter the numerator: ";
	int numerator;
	std::cin>>numerator;

	std::cout<<"Enter the denominator: ";
	int denominator;
	std::cin>>denominator;
	try{
		if(denominator==0)
			throw denominator;
			//throw std::string("denominator is zero");
		std::cout<<"Value: "<<numerator/denominator<<std::endl;
	}
	catch(int e){ //catch an exception of type int
		std::cout<<"Cannot divide by: "<<e<<std::endl;
	}
	catch(double e){ //catch an exception of type double
		std::cout<<"Cannot divide(double) by: "<<e<<std::endl;
	}
	catch(...){ //catch an exception of any type
		std::cout<<"Exception thrown"<<std::endl;
	}
}
