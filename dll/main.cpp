#include <bits/stdc++.h>

using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prev;

  Node(int val)
  {
    data = val;
    next = nullptr;
    prev = nullptr;
  }
};

class Dll
{
private:
  Node *head;
  Node *tail;

public:
  Dll()
  {
    head = nullptr;
    tail = nullptr;
  }

  void insertAtEnd(int val)
  {
    Node *newNode = new Node(val);

    if (head == nullptr)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      newNode->next = nullptr;
      tail = newNode;
    }
  }

  void display()
  {
    if (head == nullptr)
    {
      cout << "The list is empty" << endl;
      return;
    }

    Node *temp = head;
    cout << "Start: ";
    while (temp != nullptr)
    {
      cout << temp->data << " => ";
      temp = temp->next;
    }
    cout << " NULL";
  }
};

int main()
{

  Dll ll;

  ll.insertAtEnd(3);
  ll.insertAtEnd(6);
  ll.insertAtEnd(9);
  ll.insertAtEnd(12);

  ll.display();

  return 0;
}