#include <iostream>
using namespace std;
namespace Prod{ // Creating the namespace package prod;

class Product{
	double price;
	string name;
public:
	Product(double p, string n);
	Product operator+(const Product& a);
	void operator%(int d);
	bool operator==(const Product& a);
	void toString();
	double getPrice() const;
	string getName() const;
	void setPrice(double p);
};
}
