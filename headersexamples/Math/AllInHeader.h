#ifndef ALLIN_H_
#define ALLIN_H_
#include <iostream>
using namespace std;

namespace Add{
  class MultiplyClass{

  	private:
  		int c;
  		int d;
  	public:
  		MultiplyClass(int c,int d);
  		int multiply();
  };
class AddClass{
	private:
		int a;
		int b;
    MultiplyClass helloMultiply;
	public:
		AddClass(int a,int b);
		int add();
};

}
#endif
