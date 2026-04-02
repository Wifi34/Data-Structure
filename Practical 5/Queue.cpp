#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue operation
void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        cout << "Queue overflow" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;

        queue[++rear] = x;
        cout << "Queue inserted" << endl;
    }
}

// Dequeue operation
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue underflow" << endl;
    }
    else
    {
        cout << "Deleted element: " << queue[front++] << endl;
    }
}

// Display queue
void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}