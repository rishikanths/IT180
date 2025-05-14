#include<iostream>
#include<string>
using namespace std;

class Player {
protected:
	string name, org, team;
public:
	// Initializing member varaibles with constructor arguments
	// #1
	Player(string n, string o, string t) {
		name = n;
		org = o;
		team = t;
		cout <<"Calling Player Constructor"<<endl;
	}
	~Player(){
		cout <<"Calling Player desconstructor"<<endl;
	}
	// Initializing member varaibles with constructor arguments
	// #2
	//Player(string n, string o, string t): name(n), org(o), team(t) {}
};

class NFL: public Player {
public:
	double rating;
	// Invoking the superclass constructor with arguments and
	// assign value to the member rating

	NFL(string n1, string o1, string t1, double r):Player(n1,o1,t1),rating(r){
		cout <<"Calling NFL Constructor"<<endl;
	}
	~NFL(){
		cout <<"Calling NFL desconstructor"<<endl;
	}
};
class ISUNFL: public NFL {
public:
	double rating;
	// Invoking the superclass constructor with arguments and
	// assign value to the member rating
	ISUNFL(string n2, string o2, string t2, double rating):NFL(n2,o2,t2,rating){
		this->rating = rating;
		cout <<"Calling ISUNFL Constructor"<<endl;
	}
	~ISUNFL(){
		cout <<"Calling ISUNFL desconstructor"<<endl;
	}
};
int main () {
	ISUNFL rishi ("Rishi","ILSTU", "RedBirds" ,0);
  return 0;
}
