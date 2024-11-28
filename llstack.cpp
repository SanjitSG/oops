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
  Stack() { top = nullptr; }

  // push
  void push(int data)
  {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
  }

  // pop
  int pop()
  {
    int data = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return data;
  }
  // peek
  // is empty
};

int main()
{
  Stack stack;

  // push data
  stack.push(19);
  stack.push(20);
  stack.push(37);
  stack.push(78);

  cout << "top " << stack.pop() << endl;
  cout << "top " << stack.pop() << endl;
  return 0;
}