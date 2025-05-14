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
