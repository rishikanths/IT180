/**
 * exampleString.cpp
 */

#include <iostream>
#include <string>

using namespace std;
int main(){

	string name = "Rishi";
	string className = "IT226";

	//string length
	cout << "Length - " << className.length() <<endl;
	//Concatenation
	string instructor = name + " teaches " + className;
	cout << instructor << endl;
	//Access characters

	string desc = "This class handles topics GIT, C++, Android and Design Patterns";
	//Sub String (index - where to start, # of chars)
	cout<<desc.substr(0,8)<<endl;
	/*
	 * compare string. Each character is compared (numerical comparison
	 * of the character codes) to evaluate the expression.
	 */
	string name2 = "Rishi";
	if(name==name2)
		cout<<"Both are equal"<<endl;
	else
		cout<<"They are ! equal"<<endl;
	// They are many other methods associated with String such as search, modifying
	//  explore the library and practise
	return 0;
}
