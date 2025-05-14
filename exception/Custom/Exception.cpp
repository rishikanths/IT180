/*
 * exampleException.cpp
 *
 */
#include"Exception.h"

void MyException::logMessage(){
		// write the code log this message in database or file or send email
		cout<<"Message logged: "<<msg<<" with vales: {"<<n<<","<<d<<"}"<<endl;
	}
MyException::MyException(string msg, int n, int d){
		this->msg = msg;
		this->n= n;
		this->d= d;
		logMessage();
	}

 string MyException::getMessage(){
		return msg;
	}

