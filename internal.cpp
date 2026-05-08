#include<iostream>
using namespace std;
#define MAX 5

int main()
{
int deque[MAX];
int front=-1,rear=-1;
int ch,val,i;

do
{
cout<<"\n1.Insert at beginning";
cout<<"\n2.Delete at end";
cout<<"\n3.Display deque";
cout<<"\nEnter Choice : ";
cin>>ch;

switch(ch)
{
case 1:
if(front==0&&rear==MAX-1)
{
cout<<"Overflow";
}
else
{
cout<<"Enter Value : ";
cin>>val;
if(front==-1)
{
front=rear=0;
}
else
{
front--;
}
deque[front]=val;
cout<<"Inserted";
}
break;


case 2:
if(front==-1)
{
cout<<"Underflow";
}
else
{
cout<<deque[rear]<<" Deleted";

if(front==rear)
{
front=rear=-1;
}
else
{
rear--;
}
}

break;


case 3:
if(front==-1)
{
cout<<"Deque Empty";
}
else
{
for(i=front;i<=rear;i++)
{
cout<<deque[i]<<" ";
}
}
break;
}
}

while(ch!=3);

return 0;
}


