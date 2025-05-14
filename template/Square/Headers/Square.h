#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
using namespace std;

template <class S>
class Square{
private:
  S side;
public:
  Square(S side);
  S getArea();
};
#endif
