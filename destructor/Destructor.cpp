/*
 * AbstractClass.cpp
 *
 *  Created on: Mar 13, 2016
 *      Author: rsaripa
 */

#include <iostream>
#include <string.h>
using namespace std;
class Student{
private:
	int ulid;
	string firstName;
	string lastName;
public:
	Student(int id, string first, string last){
		ulid = id;
		firstName = first;
		lastName = last;
	}
	/*
	 * Copy Constructor. Takes in a object of
	 * the same type. If you don't provide one,
	 * the compiler will provide a default
	 * copy constructor
	 */
	Student(Student& me){
		ulid=me.ulid+2;
		firstName=me.firstName;
		lastName=me.lastName+" ** Copy **";
	}
	string printName(){
		return firstName+" "+lastName;
		Student temp(10,"sdds","sdsdsd");
	}
	/*
	* Destructor
	*/
	~Student(){
		cout<<"The student object with name: "<<lastName<<" is destroyed"<<endl;
	}

};

int main(){
	int soda = 2;
	int sandwich= 5;
	int totalPrice = 2+5;

	Student rishi(1,"Rishi","Saripalle");
	cout<<rishi.printName()<<endl;
	Student rishiClone = rishi;
	cout<<rishiClone.printName()<<endl;

	/* Destructor is a method, but dont call it explictly (as shown)
	   When the object goes out of scope, Destructor is called
		 automatically
		 */
	//s.~Student();
}
