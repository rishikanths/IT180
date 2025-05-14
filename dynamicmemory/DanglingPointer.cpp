#include <iostream>
#include <stdlib.h>
using std::endl;using std::cout;using std::cin;
int main(){

	int* ptr;
	ptr = new int;
  cout<<"Before: "<<ptr<<endl;
  *ptr = 100;
  delete ptr;

  // After you release the memory, the memory doesnt belong to the program.
  // However, pts still holds the address location
  // At this point "ptr" is called dangling pointer. If SHOULD NOT dereference the pointer (Line 16)
  // as the value at the address might not be integer
  cout<<"After: "<<ptr<<endl;
  cout<<*ptr<<endl;

	return 0;
}
