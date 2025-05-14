#include "Course.h"

using namespace MyCourse;

void Course::operator+(double d){
  cout<< (grade+d)/2<<endl;
}
Course::Course(string n, double g){
  name = n;
  grade = g;
}
double Course::operator+(Course& b){
  cout<<name<<endl;
  cout<<b.name<<endl;
  cout<< (grade+b.grade)/2<<endl;
  return (grade+b.grade)/2;
}
