#include <bits/stdc++.h>
#define MAX 1000

using namespace std;

class Stack
{
  int top;
  int arr[MAX];

public:
  Stack()
  {
    top = -1;
  }

  bool push(int val);
  int pop();
  int peek();
  bool isEmpty();
};

bool Stack::push(int val)
{
  if (top >= MAX - 1)
  {
    cout << "Stack overflow\n";
    return false;
  }
  else
  {
    arr[++top] = val;
    return true;
  }
};

int Stack::pop()
{
  if (top < 0)
  {
    cout << "Stack underflow\n";
    return -1;
  }
  else
  {
    int x = arr[top--];
    return x;
  }
};

int Stack::peek()
{
  if (top < 0)
  {
    cout << "Stack is empty\n";
    return -1;
  }
  else
  {
    return arr[top];
  }
};

bool Stack::isEmpty()
{
  return (top < 0);
};
// main function
int main()
{
  Stack stack;
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(50);

  // Peek and pop elements
  cout << "Top element: " << stack.peek() << endl;
  cout << "Popped element: " << stack.pop() << endl;
  cout << "Top element after pop: " << stack.peek() << endl;

  return 0;
}