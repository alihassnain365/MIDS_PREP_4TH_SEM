#include <iostream>
using namespace std;
class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int cap)
    {
        arr = new int[cap];
        front = rear = -1;
        capacity = cap;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (rear + 1 == capacity);
    }

    void enqueue(int val)
    {
        if(-1 == front and -1 == rear)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else
        {
            if(!isFull())
            {
                rear++;
                arr[rear] = val;
                
            }
            else 
            {
                cout<<endl<<"Queue is full";
            }
        }
    }

    int dequeue()
    {
        if(isEmpty())
        {
            cout<<endl<<"Is empty cant dequeue";
        }
        else
        {
            front++;
            if(front+1 == capacity) rear = front = -1;
            return arr[front-1];
        }
    }

    int size()
    {
        return rear+1;
    }

    void display()
    {
        for (int i = 0; i<= rear ; i++)
        {
            cout<<arr[i] <<" ";
        }
    }
};