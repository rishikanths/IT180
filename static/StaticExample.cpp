/*
 * StaticExample.cpp
 *
 *  Created on: Sep 25, 2016
 *      Author: rsaripa
 */

#include <iostream>

using namespace std;

class StaticExample {
public:
	static int staticVar;
	int nonStaticVar;
	/* In class initialization of non-const static members
	* is not allowed. The below statement will throw an error
	*/
	//static int staticVar = 20;
	StaticExample(){
		staticVar++;
		nonStaticVar = 1;
	}

	int getStaticVar(){
		return staticVar;
	}
	void static staticMethod();
};
int StaticExample::staticVar=0;
void StaticExample::staticMethod(){
	cout<<"This is static Method"<<endl;
}
int main(){
	cout<<StaticExample::staticVar<<endl;
	StaticExample s;
	StaticExample s1;
	StaticExample s2;
	cout<<s2.staticVar<<endl;
	cout<<s2.nonStaticVar<<endl;

	return 0;
}
