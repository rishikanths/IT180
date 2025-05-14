/*
 * InheritanceExample.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: rsaripa
 */

#include<iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Student {
protected:
	string name;
public:
	Student(string name) {
		this->name = name;
	}
	double payTaxes(){
		return 0.0;
	}
};

class Employee {
	protected:
		double wages;
public:
	Employee(double wages){
		this->wages = wages; // (*this).wages = wages;
	}
	double payTaxes(){
		srand(time(0));
		cout<<((double)rand()/RAND_MAX)<<endl;
		return ((double)rand()/RAND_MAX)*wages;
	}
};

class StudentWorker: public Student, public Employee{
public:
	StudentWorker(string name,double salary):Student(name), Employee(salary){
	}
	void getDescription() {
		cout<<"The student - "<<name<<" is paied $"<<wages<<" to be a debugger @ISU"<<endl;
	}
	/* override the parent's payTaxes behavior. The funtion signature must be the same*/
	double payTaxes(){
		return .05*wages;
	}

};
int main () {
	StudentWorker* s = new StudentWorker("Rishi",100000);
	s->getDescription(); // (*s).getDescription()
	cout<<"Need to pay $"<<s->payTaxes()<<" to IRS"<<endl;

	cout<<"As an employee, you need  to pay $"<<s->Employee::payTaxes()<<" to IRS"<<endl;
	cout<<"As an student, you need  to pay $"<<s->Student::payTaxes()<<" to IRS"<<endl;
  	delete s;

	return 0;
}
