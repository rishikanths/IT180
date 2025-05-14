/*
 * exampleNew.cpp
 *
 *  Created on: Oct 15, 2016
 *      Author: rsaripa
 */

#include <iostream>
#include <stdlib.h>
using std::string;
using std::endl;
using std::cout;
using std::cin;

class BubbleSort {
	int* numbers;
	int size;
	void display() {
		for (int i = 0; i < size; i++)
			cout << numbers[i] << "  ";
		cout<<endl;
	}
public:
	BubbleSort(int size) {
		this->size = size;
		numbers = new int[size];
		for (int i = 0; i < size; i++)
			numbers[i] = rand() % 100;
		cout<<"Array numbers before sorting:"<<endl;
		this->display();
	}
	void sort() {
		int temp;
		for (int i = 0; i < size; i++) {
			for (int j = size - 1; j > i; j--) {
				if (numbers[j] < numbers[j - 1]) {
					temp = numbers[j - 1];
					numbers[j - 1] = numbers[j];
					numbers[j] = temp;
				}
			}
		}
		this->display();
	}
	~BubbleSort(){
		delete [] numbers;
		numbers =nullptr;
	}
};
int main() {

	BubbleSort b(5);
	b.sort();
	return 0;
}
