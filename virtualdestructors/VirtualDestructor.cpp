
#include <iostream>
using namespace std;

class Animal{
public:
	double weight;
	Animal(){
		cout<<"Constructing Animal"<<endl;
	}
	void virtual setWeight(double weight){
		this->weight = weight;
	}
	double virtual getWeight(){
		return weight;
	}
	// Virtual Destructors
	virtual ~Animal(){
		cout<<"Destroying Animal"<<endl;
	}
};

class Tiger:virtual public Animal{
public:
	string name;
	int* a;
	Tiger(){		cout<<"Constructing Tiger"<<endl; a = new int[100];}
	void setWeight(double weight){
		this->weight = weight*2;
	}
	virtual void setName(string name){
		this->name= name;
	}
	virtual string getName(){
		return name;
	}
	~Tiger(){
	  delete [] a;
		cout<<"Destroying Tiger"<<endl;
	}
};

class Lion: virtual public Animal{
public:
	string code;
	Lion(){ 		cout<<"Constructing Lion"<<endl;
	}
	void setWeight(double weight){
		this->weight = weight*3;
	}
	virtual void setCode(string code){
		this->code= code;
	}
	virtual string getCode(){
		return code;
	}
	~Lion(){
		cout<<"Destroying Lion"<<endl;
	}
};

class Liger:public Tiger, public Lion{
public:
	string description;
	Liger(){ 		cout<<"Constructing Liger"<<endl;
	}
	void setWeight(double weight){
		Lion::setWeight(weight);
	}
	void setDescription(string description){
		this->description= description;
	}
	string getDescription(){
		return description;
	}
	~Liger(){
		cout<<"Destroying Liger"<<endl;
	}
};

int main(){

	Animal* a;
	a = new Liger;

	a->setWeight(600);
	cout<<"Liger Weight - "<<a->getWeight()<<endl;

	delete a;

}
