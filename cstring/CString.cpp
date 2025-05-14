/**
 * exampleString.cpp
 */

#include <iostream>
#include <cstring>
using namespace std;
int main(){

	/*
	 * C-style string. They are character arrays ending with \0
	 */
	char abc[4] = "abc";
	char def[] = "defg";

	char chars[] = {'a','b','c'};
	char chars2[]="IT226 - C++";
	cout<<abc[3]<<endl;
	cout<<strlen(def)<<endl;

	// To assign value to the c-string
	char  name[6];
	strcpy(name,"Rishi");
	cout<<"Name: "<<name<<endl;
	// To concatenate two strings
	strcat(name, "Saripalle ");
	cout<<"Name: "<<name<<endl;
	// To get string length
	cout<<"Name length: "<<strlen(name)<<endl;
	// To compare string
	if(strcmp(name,"Rishi")== 0)
		cout<<"Strings equal"<<endl;
	else
		cout<<"Strings not equal"<<endl;
	// Please explore other methods associated with c-string
	return 0;
}
