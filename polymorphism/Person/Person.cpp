#include <iostream>
using namespace std;
class Person{
	public:
	virtual void work() {
		cout<<"As a person I need to work, but not sure what exactly it is."<<endl;
	}
	virtual ~Person(){
		cout<<"Calling destructor of Person"<<endl;
	}
};
class Faculty:public Person{
	public:
		Faculty (){}
		void work(){
			cout<<"My work is to educate and be educated"<<endl;
	}
	~Faculty(){
		cout<<"Calling destructor of class Faculty"<<endl;
	}
};
class Husband:public Person{
	public:
		Husband(){}
		void work(){
			cout<<"My work is to contribute to household chores, aka human dishwasher"<<endl;
	}
	~Husband(){
		cout<<"Calling destructor ofHusband"<<endl;
	}
};
class Father:public Person{
	public:
		Father (){}
		void work(){
			cout<<" Get to know all the latest apps, perform risk assessment and unconsented surveillance"<<endl;
	}
	~Father(){
		cout<<"Calling destructor of Father"<<endl;
	}
};
class  Baby:public Person{};
class Toddler: public Baby{
	public: void work(){
		cout<<"Eat and Sleep- Good life"<<endl;
	}
	~Toddler(){
		cout<<"Calling destructor of Baby"<<endl;
	}
};

int main(){
	//Base class pointer
	Person* p = NULL;
		// p is pointing Faculty , subclasses of base
	p = new Faculty;
	p->work(); // (*p).work()
	delete p;

	p = new Husband;
	p->work();
	delete p;

	p = new Father;
	p->work();
	delete p;

	p = new Toddler;
	p->work();
	delete p;

	p = new Baby;
	p->work();
	delete p;

	return 0;
}
