#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// Push operation
void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        stack[++top] = x;
        cout << "Stack inserted" << endl;
    }
}

// Pop operation
void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        cout << "Popped element: " << stack[top--] << endl;
    }
}

// Display stack
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}