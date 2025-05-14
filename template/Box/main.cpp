#include <iostream>
using namespace std;

template <class N, class W, class H, class L>
class Box{
	public:
		N name;
		W width;
		H height;
		L length;
		Box(N name, W w, H h, L l){
			this->name = name;this->width = w;this->height = h;
			this->length = l;
		}
		Box(W w, H h, L l);
		void getVolume();
};
//Box::Box(double w, double h, doubl l){
//
//}
// Scope of the Method aka ClassName::methodName(arguments)
template <class N, class W, class H, class L>
Box<N,W,H,L>::Box(W w, H h, L l){ // Box::Box(int w, int l, int h){......}
	this->name = "Default Box";this->width = w;this->height = h;
	this->length = l;
}

template <class N, class W, class H, class L>
void Box<N,W,H,L>::getVolume(){
	cout<<"The box named - "<<name<<" weighs: "<<width*length*height<<endl;
}
int main(){
	//    N     W    H     L
	Box<string,int,double,int> box1("candy",20,20.12,20);
	box1.getVolume();
	//     N    W    H     L
	Box<string,int,double,int> box3(20,20.12,20);
	box3.getVolume();

	Box<string, double, double, float> box6 (20.34,34.56, 1234.45f);

	Box<string,double,double,int>* box2 = new Box<string,double,double,int>("candy",2,20.12,10);
	box2->getVolume();

	delete box2;
}
