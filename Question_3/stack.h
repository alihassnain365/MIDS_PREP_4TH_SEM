#include <iostream>
using namespace std;
class Stack
{
    int topStack;
    int * stack;
    int capacity;
    public:
    Stack(int cap)
    {
        capacity = cap;
        stack = new int[capacity];
        topStack = -1;
    }

    bool isEmpty()
    {
        return (topStack == -1);
    }

    bool isFull()
    {
        return (capacity  == topStack + 1);
    }

    void push(int val)
    {
        if(!isFull())
        {
            topStack++;
            stack[topStack] = val;
        }
        else
        {
            cout<<endl<<"Stack is full";
        }
    }

    int pop()
    {
        if(isEmpty())
        {
            throw runtime_error("Stack is empty");
        }
        else
        {
            topStack--;
            return stack[topStack+1];
        }
    }

    int peek()
    {
      if(isEmpty())
        {
            throw runtime_error("Stack is empty");
        }
        else
        {
            return stack[topStack];
        }  
    }

    void display()
    {
        for(int i = 0; i<=topStack; i++)
        {
            cout<<stack[i]<<" ";
        }
    }
};