#include<iostream>
#include <string>
using namespace std;

class CheckingAccount {
	private:
		double amt;
		double rate = 10.3, time = 30;
	public:
		CheckingAccount(double v){
			amt = v;
		}
		double getIntreset() {
			return (amt*(1+(rate/100)*time)-amt);
		}
};

class SavingAccount {
	private:
		double amt;
		double rate = 20.3, time = 30;
	public:
		SavingAccount(double v){
			amt = v;
		}
		double getIntreset() {
			return (amt*(1+(rate/100)*time)-amt);
		}
};

class Account: public SavingAccount, public CheckingAccount {
	public:
		string acctName;
		Account(double amt, string name):SavingAccount(amt), CheckingAccount(amt), acctName(name){} // amt 1000 name ISuBank
};
int main () {

	Account a(1000, "ISUBank");
	Account* dynAccount = new Account(1000, "ISUBank");

	cout<<"Interest earned -$"<<a.SavingAccount::getInterset()<<endl;
	cout<<"Interest earned -$"<<dynAccount->CheckingAccount::getIntreset()<<endl;
	delete dynAccount;
	dynAccount = nullptr; // ONLY in from C++11 standard
	return 0;
}
