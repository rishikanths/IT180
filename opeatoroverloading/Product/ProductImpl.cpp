#include "Product.h"
using namespace Prod; // Using the defined namespace
Product::Product(double p, string n){
	price = p;
	name = n;
}
Product Product::operator+(const Product& a){
	double total = price + a.getPrice();
	Product temp(total, name+" - "+a.getName());
	return  temp;
}
void Product::operator%(int d){
	price = price - (price*d)/100;
}
bool Product::operator==(const Product& a){
	if(price == a.price)
		return true;
	return false;
}
void Product::toString(){
	cout<<"Product Name: "<<name<<", price: "<<price<<endl;
}
double Product::getPrice() const {
	return price;
}
void Product::setPrice(double p) {
	price = p;
}
string Product::getName() const {
	return name;
}
