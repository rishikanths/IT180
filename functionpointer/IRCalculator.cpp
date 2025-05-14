#include "IRCalculator.h"

void RateCalculator::calculatePayment(double principle, int time, double (*getIR)(double)){
	double rate = getIR(principle);
	cout<<"You will be paid - $"<<principle *pow((1+(rate/100)),time)<<" on $"<<principle<<endl;
}
