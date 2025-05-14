
#include <iostream>
using namespace std;

class Animal{
public:
	double weight;
	Animal(){
		cout<<"Constructing Animal"<<endl;
	}
	void setWeight(double weight){
		this->weight = weight;
		cout<<"Calling set weight in Animal"<<weight<<endl;
	}
	double getWeight(){
		return weight;
	}
	// Virtual Destructors
	~Animal(){
		cout<<"Destroying Animal"<<endl;
	}
};

class Tiger:virtual public Animal{
public:
	string name;
	Tiger(){		cout<<"Constructing Tiger"<<endl;}
	void setName(string name){
		this->name= name;
	}
	string getName(){
		return name;
	}
	~Tiger(){
		cout<<"Destroying Tiger"<<endl;
	}
};

class Lion: virtual public Animal{
public:
	string code;
	Lion(){ 		cout<<"Constructing Lion"<<endl;
	}
	void setCode(string code){
		this->code= code;
	}
	string getCode(){
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

	Animal* animal;
	animal = new Liger;
	//Liger* animal = new Liger;
	animal->setWeight(600);
	cout<<"Liger Weight - "<<animal->getWeight()<<endl;

	delete animal;

}
