#include "AllInHeader.h"
using namespace std;
using namespace Add;
		AddClass::AddClass(int a,int b){
			this->a = a;
			this->b = b;
		}
		int AddClass::add(){
			return a+b;
		}

	MultiplyClass	::MultiplyClass(int c,int d){
		this->c = c;
		this->d=d;
	}
		int MultiplyClass::multiply(){
				return c*d;
		}

int main(){
	AddClass a(10,10);
	cout<<a.add();
}
