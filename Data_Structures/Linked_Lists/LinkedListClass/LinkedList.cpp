#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
  this->head = NULL;
}

LinkedList::~LinkedList()
{
  Node* current = head;
  while (current != 0)
  { 
    Node* next = current->next;
    delete current;
    current = next;
  }
  head = NULL;
  std::cout << "List successfully deleted from memory" << std::endl;
}

void LinkedList::insert(int value)
{
  Node* temp;

  if (head == NULL)
  {
    head = new Node();
    head->next = NULL;
    head->data = value;
  }
  else
  {
    temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new Node();
    temp = temp->next;
    temp->data = value;
    temp->next = NULL;
  }

}

void LinkedList::display()
{
  Node* temp;

  if (head == NULL)
  {
    return;
  }
  else
  {
    temp = head;
    while (temp != NULL)
    {
      std::cout << temp->data << ' ';
      temp = temp->next;
    }
    std::cout << std::endl;
  }

}