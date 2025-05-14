#include <iostream>
#include <string>
using namespace std;

struct Course{
	string title;
	string code;
	int credits;
	Course(string t, string c, int cr){
		title = t;
		code = c;
		credits = cr;
	}
	void print(){
		cout<<code<<" - "<<title<<" ("<<credits<<" credits)"<<endl;
	}
};

struct Student{
	string firstName;
	string lastName;
	void print(){
		cout<<firstName<<" "<<lastName<<endl;
	}
	Course courses[2];
};

int main(){

	Student me; // string me;
  cout<<"Size of Student: "<<sizeof(me)<<endl;
	cout<<"Student First Name: ";
	cin>>me.firstName;
	cout<<endl<<"Student Last Name: "; cin>>me.lastName;
	cout<<endl<<"Student 1st Course Title: "; cin>>me.courses[0].title;
	cout<<endl<<"Student 1st Course Code: "; cin>>me.courses[0].code;
	cout<<endl<<"Student 2nd Course Title: "; cin>>me.courses[1].title;
	cout<<endl<<"Student 2nd Course Code: "; cin>>me.courses[1].code;
	me.print();
	Student duplicate;
	duplicate = me;

	cout<<"Name: "<<duplicate.firstName<<" "<<duplicate.lastName<<endl;

	duplicate.firstName = "Duplicate";

	cout<<"Duplicate - Name: "<<duplicate.firstName<<" "<<duplicate.lastName<<endl;

	cout<<"Name: "<<me.firstName<<" "<<me.lastName<<endl;

	return 0;
}
