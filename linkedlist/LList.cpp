#include "LList.h"

LList::LList(){
  head = nullptr;
  tail = nullptr;
}
void LList::add(int value){
  Node* n = new Node;
  n->value = value;
  if(head == nullptr){
    head = n;
    tail = n;
  }
  else {
    tail->nextNode = n;
    tail = n;
    tail->nextNode = nullptr;
  }
}

void LList::display(){
  Node* temp = new Node;
  temp = head;
  while(temp->nextNode!=nullptr){
    cout<<temp->value<<"   ";
    temp = temp->nextNode;
  }
  cout<<temp->value;
  cout<<endl;
}
