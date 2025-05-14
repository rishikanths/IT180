#include "Money.h"

int main(){
	
	Money me(5000,3000);
		
	Money* partner = new Money(3000,4000);
	Money* total = me+partner; // calls overloaded +
	cout<<"Total money pointer in main()"<<total<<endl;
	total-> toString();
	
	// Always delete the allocated dynamic memory
	delete total;
	total = nullptr;
	delete partner;
	return 0;
}

