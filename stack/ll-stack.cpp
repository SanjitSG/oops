// push - int x
// pop
// peek

#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

class Stack
{
  Node *top;

public:
  Stack()
  {
    top = nullptr;
  }

  void push(int value)
  {
    Node *newNode = new Node(value);
    newNode->data = value;
    newNode->next = top;
    top = newNode;
  };

  int pop()
  {
    if (top == nullptr)
    {
      cout << "Stack underflow\n";
      return -1;
    }
    else
    {
      int x = top->data;
      Node *temp = top;
      top = top->next;
      delete temp;
      return x;
    }
  }
};

int main()
{

  Stack stack;
  stack.push(10);
  stack.push(20);

  cout << stack.pop();
  return 0;
}
