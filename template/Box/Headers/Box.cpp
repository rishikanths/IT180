#include "Box.h"
using namespace BoxExample;

template <class N, class W, class H, class L>
Box<N,W,H,L>::Box(N n, W w, H h, L l){
	this->name = n;this->width = w;this->height = h;
	this->length = l;
}

template <class N, class W, class H, class L>
Box<N,W,H,L>::Box(W w, H h, L l){ // Box::Box(int w, int l, int h){......}
	this->name = "Default Box";this->width = w;this->height = h;
	this->length = l;
}
template <class N, class W, class H, class L>
void Box<N,W,H,L>::getVolume(){
	cout<<"The box named - "<<name<<" weighs: "<<width*length*height<<endl;
}

template class Box<string,int,double,int>;
template class Box<string, double, double, float>;
template class  Box<string,double,double,int>;
template class   Box<string,double,float,int>;
template class   Box<string,double,float,float>;
