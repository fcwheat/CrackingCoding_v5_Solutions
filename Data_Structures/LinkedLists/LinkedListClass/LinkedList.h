#ifndef __LINKEDLIST_h__
#define __LINKEDLIST_h__

struct Node
{
  int data;
  Node* next;
};

class LinkedList {
  
  public:
    Node* head;
    LinkedList();
    ~LinkedList();
    void display();
    void insert(int value);

}; 

#endif // __LINKEDLIST_h__