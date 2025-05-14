#include <iostream>

#ifndef HEADER_H_
#define HEADER_H_
using namespace std;
class AddNumbers {
private:
	int num1;
	int num2;
public:
	AddNumbers();
	int add(int, int); // or int add(int x, int y);
	void displyNumbers(){
		cout<<"Num 1 -"<<num1<<", Num2: "<<num2<<endl;
	}
};
#endif
