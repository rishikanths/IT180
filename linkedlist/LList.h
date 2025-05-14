#ifndef LLIST_H_
#define  LLIST_H_
#include <iostream>
using namespace std;
struct Node{
  int value;
  Node* nextNode;
};

class LList{

private:
  Node* head, *tail;
public:
  LList();
  void add(int vaue);
  void display();
};

#endif
