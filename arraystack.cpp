// Stack using array implementation(static size)

// procedural programming

#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int Stack[MAX];//global Stack
int top =-1;

void push(int value)
{
    if(top>=MAX-1)
        cout<<"Stack overflow condition meets\n";
    else
    {
        Stack[++top]=value;
        cout<<value<<" is pushed into the Stack\n";
    }
}

int pop()
{
    if(top<0)
    {
        cout<<"Stack underflow\n";
        return -1;
    }
    else
    {
        int popele=Stack[top--];
        return popele;
    }
}

int peek()
{
    if(top<0)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else
    {
        return Stack[top];
    }
}

bool isEmpty()
{
    return (top<0);
}

int main()
{
    push(100);
    push(200);
    push(300);
    cout<<"Top Element is: "<<peek()<<"\n";
    cout<<pop()<<" poped from the Stack\n";
    cout<<pop()<<" poped from the Stack\n";
     cout<<pop()<<" poped from the Stack\n";
      cout<<pop()<<" poped from the Stack\n";
    cout<<"Top Element is: "<<peek()<<"\n";
}
