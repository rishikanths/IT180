#include "Square.h"

template <class S>
Square<S>::Square(S side){
  this->side = side;
}
//Square::Aquare(double side){
// this->side = side
//}
template <class S>
S Square<S>::getArea(){
  return this->side* this->side;
}

template class Square<int> ;
template class Square<double> ;
template class Square<long> ;
template class Square<float> ;
