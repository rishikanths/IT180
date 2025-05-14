#ifndef SHAPE
#define SHAPE

#include <iostream>
using namespace std;

class Shape{
protected:
	double width;
	double height;
public:
	virtual double getArea()=0;
	Shape(double a, double b){
        width = a;
        height = b;
    }
    /**
     * This is not pure virtual function. 
     * Abstract class can have regular functions
     */
    void describe(){
        cout<<"This abstract class represents general shape"<<endl;
    }
};
#endif

int main(){
    Shape* shape;

    //Shape* s = new Shape; // You cannot create a object of Shape

    return 0;
}