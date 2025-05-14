#include "Person.h"

Person::Person(string em){
	email = em;
}
Person::Person(string fn,string em){
	email = em;
	firstName = fn;
}
void Person::printPerson()const{
	prettyPrintPerson();
	cout<<firstName<<" "<<lastName<<endl;
}
void Person::prettyPrintPerson() const{
	cout<<firstName<<" "<<lastName<<endl;
}
