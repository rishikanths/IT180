#include "Columbus.h"
double Columbus::getArea(){
  return width* height*length;
}
Columbus::Columbus(double a,double b,double c):Shape(a,b){
  length=c;
}
Columbus::~Columbus(){
  cout<<"Destroyed Columbus"<<endl;
}
