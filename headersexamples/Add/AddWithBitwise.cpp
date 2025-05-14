#include "AddEx.h"

AddClass::AddClass(int x, int y){
  a = x;
  b = y;
}

int AddClass::add(){

  while(b!=0){
    int temp = a & b;
    a = a ^ b;
    b = temp << 1;
  }
  return a;
}
