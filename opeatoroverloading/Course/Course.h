#ifndef COURSE_H_ //macro
#define COURSE_H_ // # - directives

#include <iostream>

#include <string>
using namespace std;
namespace MyCourse{

class Course{
public:
  string name = "";
  double grade = 0.0;
  Course(string n, double g);
  double operator+(Course& b);
  void operator+(double);
};
}
#endif
