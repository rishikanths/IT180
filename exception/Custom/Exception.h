/*
 * exampleException.cpp
 *
 *  Created on: Oct 10, 2016
 *      Author: rsaripa
 */
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class MyException{
	
	private:
		string msg;
		int n, d;
		void logMessage();
	public:
		MyException(string msg, int n, int d);
		string getMessage();
};
