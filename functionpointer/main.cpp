#include "IRCalculator.h"

using namespace std;

double getISUBankInterest(double value){

	if(value<10000)
		return 1.5;
	else if(value<20000)
		return 1.65;
	
	return .5;
}
double getNonISUBankInterest(double value){

	if(value<10000)
		return 1.15;
	else if(value<20000)
		return 1.35;
	
	return .2;
}

double getNonISUBankInterest2(double value){

	if(value<10000)
		return 1.45;
	else if(value<20000)
		return 1.75;
	
	return .2;
}


int main(){

	RateCalculator ir;
	ir.calculatePayment(1000,36,getISUBankInterest);
	ir.calculatePayment(1000,36,getNonISUBankInterest);
	ir.calculatePayment(1000,36,getNonISUBankInterest2);

}
