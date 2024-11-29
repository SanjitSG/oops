#include <bits/stdc++.h>

using namespace std;

class Stack
{
private:
  int *stackArray;
  int capacity;
  int topIndex;

public:
  // constructor
  Stack(int size)
  {
    capacity = size;
    stackArray = new int[capacity];
    topIndex = -1;
  }

  // destructor
  ~Stack()
  {
    delete[] stackArray;
  }

  void push(int val)
  {
    if (isFull())
    {
      cout << "Stack Overflow\n";
      return;
    }
    stackArray[++topIndex] = val;
  }

  // pop
  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty\n";
      return -1;
    }
    return stackArray[topIndex--];
  }
  // peek
  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack is empty\n";
      return -1;
    }
    return stackArray[topIndex];
  }
  // is full

  bool isFull()
  {
    return topIndex == capacity - 1;
  }
  // is empty

  bool isEmpty()
  {
    return topIndex == -1;
  }

  void display()
  {
    if (isEmpty())
    {
      cout << "Stack is empty\n";
      return;
    }
    for (int i = 0; i <= topIndex; i++)
    {
      cout << stackArray[topIndex - i] << " ";
    }
    cout << endl;
  }
};

int main()
{

  // Initialize Stack
  Stack stack(10);
  stack.push(10);
  stack.push(20);
  stack.push(27);
  stack.push(3);
  stack.push(56);
  stack.push(45);
  stack.display();
  // stack.pop();
  stack.display();
  cout << stack.isFull();

  return 0;
}