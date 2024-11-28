#include <iostream>
#define MAX 1000 // Correctly define the maximum size without a semicolon
using namespace std;

class Stack
{
  int top;      // Tracks the top index of the stack
  int arr[MAX]; // Array to store stack elements

public:
  Stack() { top = -1; } // Constructor initializes stack as empty

  bool push(int val)
  {
    if (top >= MAX - 1)
    {
      cout << "Stack Overflow\n";
      return false;
    }
    arr[++top] = val;
    return true;
  }

  int pop()
  {
    if (top < 0)
    {
      cout << "Stack Underflow\n";
      return -1;
    }
    return arr[top--];
  }

  int peek()
  {
    if (top < 0)
    {
      cout << "Stack is Empty\n";
      return -1;
    }
    return arr[top];
  }

  bool isEmpty() { return (top < 0); }
};

// Main function to demonstrate the stack
int main()
{
  Stack stack;

  // Push elements onto the stack
  stack.push(10);
  stack.push(20);
  stack.push(30);

  // Peek and pop elements
  cout << "Top element: " << stack.peek() << endl;
  cout << "Popped element: " << stack.pop() << endl;
  cout << "Top element after pop: " << stack.peek() << endl;

  return 0;
}
