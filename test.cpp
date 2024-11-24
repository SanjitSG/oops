#include <bits/stdc++.h>

using namespace std;

struct Node
{

  int data;
  Node *next;

  // constructor
  Node(int val)
  {
    data = val;
    next = nullptr;
  }
};

class Linkedlist
{
private:
  Node *head;

public:
  // constructor fn
  Linkedlist()
  {
    head = nullptr;
  }
  // insert node
  // at beginning
  // at end
  // intermediat

  void insertAtBeginning(int val)
  {
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
      head = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }

  // delete node
  // traverse
  void display()
  {

    if (head == nullptr)
    {
      cout << "List is empty" << endl;
    }
    else
    {
      Node *temp = head;
      while (temp != nullptr)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
    }
  }
};

int main()
{
  Linkedlist ll;

  ll.insertAtBeginning(2);
  ll.insertAtBeginning(1);
  ll.insertAtBeginning(4);

  ll.display();
  return 0;
}