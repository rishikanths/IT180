#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
//Constant variable
const double PI = 3.14125;

void fillArray(int a[],int size){
	for(int i=0;i<size;i++)
		a[i]=rand()%600;
}

int main(){
	int numbers[5];
	int random[5];
	for(int i=0;i<5;i++){
		cout<<"Enter value for numbers["<<i<<"]: ";
		cin>>numbers[i];
		cout<<endl;
	}
	cout<<"Size of numbers array: "<<sizeof(numbers)<<" byter"<<endl;
	cout<<"Values enetered"<<endl;
	for(int i=0;i<5;i++){
		cout<<numbers[i]<<" ";
	}
	srand(time(NULL)); // Randomizes the values
	fillArray(random,5);
	cout<<endl;
	cout<<"Random values"<<endl;
	for(int i=0;i<5;i++)
		cout<<random[i]<<" ";
	cout<<endl;
}
