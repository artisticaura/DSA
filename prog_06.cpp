#include <iostream>
using namespace std;

class Queue
{
    int arr[5];
    int front;
    int rear;

public:

    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if(rear == 4)
        {
            cout << "Queue is full\n";
        }
        else
        {
            if(front == -1)
            {
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << value << " inserted\n";
        }
    }

    void dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << arr[front] << " deleted\n";
            front++;
        }
    }

    void peek()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "Front element is " << arr[front] << endl;
        }
    }

    void display()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "Queue elements are:\n";
            for(int i = front; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();

    q.dequeue();

    q.display();

    return 0;
}