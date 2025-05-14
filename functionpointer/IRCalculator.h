#include <iostream>
#include <math.h>
using namespace std;

class RateCalculator{
	public:
		void calculatePayment(double principle, int time, double (*getIR)(double));
};
