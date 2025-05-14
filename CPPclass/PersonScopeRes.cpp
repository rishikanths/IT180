#include <iostream>
#include <string>
using namespace std;

class Person{
private:
	int SSN;
	string govtID = "ILSTU673672832";
	void prettyPrintPerson() const;
protected:
	string taxID = "IT226";
public:
	string firstName = "Rishi";
	string lastName = "Saripalle";
	string email = "rishi.saripalle@ilstu.edu";
	Person(string em);
	Person(string fn,string em);
	void printPerson() const;

};
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
int main(){
	Person p("rsaripa@ilstu.edu");
	
	p.printPerson();
	Person duplicate(p);
	cout<<duplicate.email<<endl;
}
