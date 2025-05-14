#include <iostream>

using namespace std;
class Money{
	double savings;
	double checking;
public:
	Money(){
		savings=checking=1000;
	}
	Money(double checking,double savings){
		this->checking=checking;
		this->savings=savings;
	}
	void setChecking(double amt);
	Money operator+(int value);
	void setSavings(double amt);
	double getChecking() const;
	double getSavings() const;
	Money operator +(const Money& a) const;
	Money operator -(const Money& a) const;
	bool operator ==(const Money& a) const;
	void operator++(int); // postfix. You pass a int varibale, to differentiate. The argument has not value
	void operator++();//prefix
	void toString() const;
};
void Money::operator ++(int a){
	this->checking++;
	this->savings++;
}
void Money::operator ++(){
	this->checking = this->checking+100;
	this->savings=this->savings+100;
}

Money Money::operator +(const Money& a) const{
	Money temp;
	temp.setChecking(this->getChecking()+a.getChecking());
	temp.setSavings(this->getSavings()+a.getSavings());
	return temp;
}
Money Money::operator -(const Money& a) const{
	Money temp;
	temp.setChecking(this->getChecking()-a.getChecking());
	temp.setSavings(this->getSavings()-a.getSavings());

	return temp;
}
bool Money::operator ==(const Money& a) const{
	if(this->checking == a.getChecking() && this->getSavings()==a.getSavings())
		return true;
	else
		return false;
}
Money Money::operator+(int value){
	Money temp;
	temp.setChecking(this->getChecking()+value);
	temp.setSavings(this->getSavings()+value);
	return temp;
}
void Money::toString() const{
	cout<<"Checking - "<<this->getChecking()<<endl<<"Saving - "<<this->getSavings()<<endl;
}
void Money::setSavings(double amt){this->savings=amt;}
void Money::setChecking(double amt){this->checking=amt;}
double Money::getChecking() const{return this->checking;}
double Money::getSavings() const{return this->savings;}

int main(){
	Money me(5000,3000);
	me++;
	//cout<<++me.getChecking()<<endl;
	//++me;
	Money m3 = me+2000;
	cout<<"After adding 2000 to m3: "<<m3.getChecking()<<endl;
	cout<<"After ++ increment: "<<me.getChecking()<<endl;

	Money partner(2000,4000);
	Money total = me+partner; // calls overloaded +
	Money diff = me - partner; // calls overloaded -
	cout<<"Total checking - "<<total.getChecking()<<endl;
	cout<<"Total savings - "<<total.getSavings()<<endl;
	diff.toString();
	if(me == partner) //calls the overloaded ==
		cout <<"Me and partner are equal"<<endl;
	else
		cout <<"Me and partner are not equal"<<endl;
	return 0;
}
