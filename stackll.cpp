#include <bits/stdc++.h>
using namespace std;

// Structure for a node in the linked list
struct Node
{
  int data;   // Value of the node
  Node *next; // Pointer to the next node
};

class Stack
{
  Node *top; // Pointer to the top node of the stack

public:
  Stack() { top = nullptr; } // Initialize the stack

  void push(int value)
  {
    Node *newNode = new Node(); // Create a new node
    newNode->data = value;      // Assign value to the node
    newNode->next = top;        // Link the new node to the previous top
    top = newNode;              // Update the top pointer
  }

  int pop()
  {
    if (top == nullptr)
    { // Check if the stack is empty
      cout << "Stack underflow\n";
      return -1;
    }
    else
    {
      int x = top->data; // Retrieve the value of the top node
      Node *temp = top;  // Temporarily store the current top node
      top = top->next;   // Move the top pointer to the next node
      delete temp;       // Free memory of the removed node
      return x;
    }
  }

  int peek()
  {
    if (top == nullptr)
    {
      cout << "Stack is empty\n";
      return -1;
    }
    return top->data; // Return the value of the top node
  }
};

int main()
{
  Stack stack;
  stack.push(10);
  stack.push(20);

  cout << "Popped element: " << stack.pop() << endl; // Outputs 20
  cout << "Top element: " << stack.peek() << endl;   // Outputs 10

  return 0;
}
