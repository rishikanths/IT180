#include <iostream>
using namespace std;
class Money{
	double savings;
	double checking;
public:
	Money();
	Money(double,double );
	void setChecking(double amt);
	void setSavings(double amt);
	double getChecking() const;
	double getSavings() const;
	Money* operator +(Money* a);
	void toString() const;
};
