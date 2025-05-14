#include "Person.h"

int main(){
	Person p("rsaripa@ilstu.edu");
	p.printPerson();
	Person duplicate(p);
	cout<<duplicate.email<<endl;
}
