#ifndef BOX_H_
#define BOX_H_
#include <iostream>

using namespace std;
namespace BoxExample{
template <class N, class W, class H, class L>
class Box{
	public:
		N name;
		W width;
		H height;
		L length;

		Box(N name, W w, H h, L l);
		Box(W w, H h, L l);
		void getVolume();
};
}
#endif
