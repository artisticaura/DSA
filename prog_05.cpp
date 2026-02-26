#include <iostream>
using namespace std;

class Stack
{
    int arr[5];
    int top;

public:

    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if(top == 4)
        {
            cout << "Stack is full\n";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " inserted\n";
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << arr[top] << " deleted\n";
            top--;
        }
    }

    void peek()
    {
        if(top == -1)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Top element is " << arr[top] << endl;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Stack elements are:\n";
            for(int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}