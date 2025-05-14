#include <iostream>

using namespace std;


class course{
  public:
    double grade;
    int credit;
    void operator + (course& obj);
};

void course :: operator + (course& obj){
  cout << "Sum = " << credit+obj.credit << endl;
  cout << "Average = " <<(grade+obj.grade)/2 << endl;
}

int main(){
  course obj1;
  course obj2;

  obj1.grade = 5;
  obj1.credit = 4;

  obj2.grade = 5;
  obj2.credit = 4;

  obj1+obj2;

}
