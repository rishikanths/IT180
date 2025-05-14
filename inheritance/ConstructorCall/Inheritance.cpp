#include<iostream>
#include <string>
using namespace std;

class ClassA {
public:
	ClassA(){
		cout<<"ClassA constructor"<<endl;
	}
	~ClassA(){
		cout<<"ClassA destructor"<<endl;
	}
};
class ClassB: public ClassA {
public:
		ClassB(){
			cout<<"ClassB constructor"<<endl;
		}
		~ClassB(){
			cout<<"ClassB destructor"<<endl;
		}
		void printFromB(){
			cout<<"This is a print from Class B"<<endl;
		}
};
class ClassC: public ClassB {
	public:
		ClassC(){
			cout<<"ClassC constructor"<<endl;
		}
		~ClassC(){
			cout<<"ClassC destructor"<<endl;
		}
};

int main () {

	ClassC c;
	return 0;
}
