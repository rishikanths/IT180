#include <iostream>
using namespace std;
const double PI = 3.141;
namespace Geomentry{
    class Shape{
        public:
            virtual void area()=0; 
    };
    class Rectangle:public Shape{
        private:
            int w;
            int h;
        public:
            Rectangle (int w, int h): w(w), h(h){}
            void area(){
                cout<<"Area of Rectangle is -  "<<w*h<<endl;
            }
    };
    class Circle:public Shape{
        private:
            int radius;
        public:
            Circle (int r): radius(r){}
            void area(){
                cout<<"Area of Circle is -  "<<radius*radius*PI<<endl;
            }
        };

}
using namespace Geomentry;
int main(){
    Shape* s;
    s = new Rectangle(10,20);
    s->area();
    delete s;

    s = new Circle(10);
    s->area();
    delete s;
}