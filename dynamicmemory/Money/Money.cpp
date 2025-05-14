#include <iostream>
#include "Money.h"

	Money::Money(){
		savings=checking=1000;
	}
	Money::Money(double checking,double savings){
		this->checking=checking;
		this->savings=savings;
	}

	Money* Money::operator+(Money* a){
		Money* temp = new Money;
		temp->setChecking(this->getChecking()+(*a).getChecking());
		temp->setSavings(this->getSavings()+a->getSavings());
		cout<<"Temp money pointer in operator + : "<<temp<<endl;
		return temp;
	}

	void Money::toString() const{
		cout<<"Checking - "<<getChecking()<<endl<<"Saving - "<<getSavings()<<endl;
	}
	void Money::setSavings(double amt){this->savings=amt;}
	void Money::setChecking(double amt){this->checking=amt;}
	double Money::getChecking() const{return this->checking;}
	double Money::getSavings() const{return this->savings;}
