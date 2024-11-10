#include <bits/stdc++.h>

using namespace std;

struct Node
{
  int data;
  Node *next;

  // default constructor
  Node()
  {
    data = 0;
  }
  // parametrized constructor
  Node(int val)
  {
    data = val;
    next = nullptr;
  }
};

class LinkedList
{
private:
  Node *head;

public:
  LinkedList()
  {
    head = nullptr;
  }

  // inserting a node at beginning
  void insertNodeAtBeginning(int val)
  {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }

  // inserting at the end of the list
  void insertAtEnd(int val)
  {
    Node *newNode = new Node(val);
    // check if the list is empty;
    if (head == nullptr)
    {
      newNode->next = head;
      head = newNode;
    }
    else
    {
      Node *temp = head;
      while (temp->next != nullptr)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
  // inserting at given position
  void insertAtPos(int val, int pos)
  {
    Node *newNode = new Node(val);

    // if list is empty
    if (head == nullptr)
    {
      newNode->next = head;
      head = newNode;
      return;
    }

    // traversing to pos - 1 node
    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++)
    {
      temp = temp->next;
    }

    // handling out of bound
    if (temp == nullptr)
    {
      cout << "Pos out of bound";
      delete newNode;
      return;
    }

    // inserting node at pos
    newNode->next = temp->next;
    temp->next = newNode;
  }

  // deleting first node
  void deleteFirstNode()
  {
    if (head == nullptr)
    {
      cout << "List is empty";
      return;
    }
    Node *temp = head;
    head = head->next;
    delete temp; // frees  up memory of original head.
  }
  // display list
  void display()
  {
    Node *temp = head;
    while (temp != nullptr)
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "end of list" << endl;
  }
};

// main function
int main()
{

  LinkedList ll;
  ll.insertNodeAtBeginning(2);
  ll.insertNodeAtBeginning(5);
  ll.insertAtEnd(12);
  ll.insertAtPos(27, 2);

  ll.display();
  ll.deleteFirstNode();
  ll.display();
  return 0;
}