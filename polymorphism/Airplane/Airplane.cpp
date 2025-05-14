#include <iostream>
#include <string>
using namespace std;

class Airplane{
	protected:
		string name;
		int seats;
		string arrangment;
		int* defCostPerSeat;
	public:
	Airplane(string name,int seats){
			this->name = name;
			this->seats = seats;
			// Average Cost of each seat;
			defCostPerSeat = new int[seats];
			for(int i=0;i<seats;i++)
				defCostPerSeat[i] = rand()%2400;
			cout<<"Calling constructor of Airplane"<<endl;
		}
	virtual void defaultSeating(){
      cout<<"By default, the each row has '3 2 3' seating arraignment"<<endl;
	}
 virtual ~Airplane(){
		cout<<"Calling destructor of Airplane"<<endl;
		delete [] defCostPerSeat;
	}
};

class Emirates:public Airplane{
	public:
		int* EmiCostPerSeat;
		Emirates(string name,int seats, string arrangment):Airplane(name,seats){
				EmiCostPerSeat = new int[seats];
				// Average Cost of each seat for Emirates;
				EmiCostPerSeat = new int[seats];
				for(int i=0;i<seats;i++)
					EmiCostPerSeat[i] = rand()%5400;
				cout<<"Calling constructor of Emirates"<<endl;
		}
	void defaultSeating(){
		//Airplane::defaultSeating();
		cout<<"Emirates overrides the default behavior and have "<<arrangment<<" seating arraignment for each row"<<endl;
	}
	~Emirates(){
		cout<<"Calling destructor of Emirates"<<endl;
		delete [] EmiCostPerSeat;
	}
};
class Delta:public Airplane{
	public:
		int* DeltaCostPerSeat;
		Delta(string name,int seats, string arrangment):Airplane(name,seats){
				cout<<"Calling constructor of Delta"<<endl;
				DeltaCostPerSeat = new int[seats];
				// Average Cost of each seat for Delta;
				DeltaCostPerSeat = new int[seats];
				for(int i=0;i<seats;i++)
					DeltaCostPerSeat[i] = rand()%4400;
		}
	void defaultSeating(){
		//Airplane::defaultSeating();
		cout<<"Delta overrides the default behavior and have "<<arrangment<<" seating arraignment for each row"<<endl;
	}
	~Delta(){
		cout<<"Calling destructor of Delta"<<endl;
		delete [] DeltaCostPerSeat;
	}
};

int main(){

	Airplane* b747;
	b747 = new Emirates("Emirates 747",380,"333");
	b747->defaultSeating();
	delete b747;
	cout<<endl;
	cout<<endl;
	
	b747 = new Delta("Delat 747",200,"2 2 2");
	b747->defaultSeating();
	delete b747;
	
	return 0;
}
