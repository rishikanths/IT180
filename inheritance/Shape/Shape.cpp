#include "Shape.h"
void Shape::getDesc(){
  cout<<"This is a shape"<<endl;
}
Shape::Shape(double a, double b){
  width = a;
  height = b;
}
Shape::~Shape(){
  cout<<"Destroying Shape"<<endl;
}
