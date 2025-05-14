#include <iostream>
using namespace std;

class Person{
private:
	string SSN;
protected:
	string taxID;
	string getTaxID(){
		return taxID;
	}
public:
	string firstName;
	string lastName;
	string email;
	void setSSN(string s){
		SSN = s;
	}
	void setTaxID(string id){
		taxID=id;
	}
	void toString() const{
		cout<<this->firstName<<"  "<<this->lastName<<endl; //cout<<firstName<<"  "<<lastName<<endl;
		cout<<"Email is "<<email<<endl;
	}
};
int main(){
	/*
	 * calls the default no-argument constructor provided
	 */
	Person q;
	q.firstName = "Rishi";
	q.lastName = "Rishi";
	q.email = "Rishi@Rishicom";
	q.setSSN("111-222-3333");
  q.toString();
	cout<<endl;
	Person* p = new Person;
	p->setSSN("123-34-2345"); // same as (*p).setSSN("123-34-2345")
	p->firstName = "Rishi";
	p->lastName = "Kanth";
	p->email = "rishi.saripalle@ilstu.edu";
	p->toString();
	cout<<endl;
	
	cout<<"Befor=re delete"<<p<<endl;
	delete p;
	cout<<"After delete"<<p<<endl;
	p->toString();
	// p is dangling pointer
	p = nullptr; // This is for C++ 11
	//p = NULL;// For any C++ below C++11
	if(p==nullptr){
		p = new Person[2];//[Person@0 Person@1]
		for(int i =0;i<2;i++){
			p[i].firstName = "Rishi";// i = 0 p[0].firsName
			p[i].lastName = "Kanth";
			p[i].email = "rishi.saripalle@ilstu.edu";
		}
	}
	for(int i =0;i<2;i++){
		p[i].toString();
	}
	delete[] p;
	p = nullptr;
	return 0;

}
