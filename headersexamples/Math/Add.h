#ifndef ADD_H_
#define ADD_H_
#include "Multiply.h"
#include <iostream>
using namespace std;

namespace Add{
class AddClass{

	private:
		int a;
		int b;
	public:
		AddClass(int a,int b);
		int add();
};
}
#endif
