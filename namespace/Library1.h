
#include <iostream>
namespace Library1{
	int getArea(int width, int height){
		return width*height;
	}
	int getSurfaceArea(int width, int height, int length){
		return 2*width*height*length;
	}
	namespace Library11{
		int getArea(int width, int height){
			return width*height;
		}
		double getSurfaceArea(double width, double height, double length){
			return 2*width*height*length;
		}
	}

}
