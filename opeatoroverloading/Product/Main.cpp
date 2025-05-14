#include "Product.h"
using namespace Prod;
int main(){
	Product pc(1500,"Dell XYZ");
	Product xbox(600,"MS Xbox");
	Product bose(300,"Gaming Headset");
	pc%15;
	Product sale = pc+xbox+bose;
	sale.toString();

	return 0;
}
