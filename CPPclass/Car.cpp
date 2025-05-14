#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
  string make;
  string model;
  string year;
  void prettyDesc() const;

public:
  int price;
  string color;

  void startCar();
  Car(string, string, string, int, string);
  void desc() const;
};

void Car::startCar()
{
  cout << "Start the car, lets go!!" << endl;
}
void Car::desc() const
{
  prettyDesc();
  cout << "Cost: " << price << endl;
}
void Car::prettyDesc() const
{
  cout << make << " " << model << " " << year << endl;
}
Car::Car(string ma, string mo, string y, int p, string c)
{
  make = ma;
  model = mo;
  year = y;
  price = p;
  color = c;
}

int main()
{
  Car c("RedBrird Elec", "RB1", "2025", 2000000000, "RedBird Red");
  c.startCar();
  c.desc();
}
