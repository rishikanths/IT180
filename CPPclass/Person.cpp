#include <iostream>
#include <string>
using namespace std;

class Person{
private:
	int SSN;
	string govtID = "ILSTU673672832";
	void assignSSN(){
	}
protected:
	string taxID = "IT226";
public:
	string firstName = "Rishi";
	string lastName = "Saripalle";
	string email = "rishi.saripalle@ilstu.edu";
	Person(string em){
		email = em;
	}
	Person(string fn,string em){
		email = em;
		firstName = fn;
	}
	Person(Person& pRef){
		firstName = pRef.firstName;
		lastName = pRef.lastName;
		email = pRef.email;
		taxID = pRef.taxID;
		govtID = pRef.govtID;
		SSN = pRef.SSN;
	}
};
int main(){
	Person p("rsaripa@ilstu.edu");
	cout<<p.firstName<<endl;
	cout<<p.lastName<<endl;
	Person p2(p);
	Person p3 = p;
	cout<<"Calling P2 object attributes:"<<endl;
	cout<<p2.firstName<<endl;
}
