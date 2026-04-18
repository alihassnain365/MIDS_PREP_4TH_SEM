#include <iostream>
#include "queue.h"
using namespace std;
void perfromSecurityCheck(Queue *q,Queue *q1,Queue *q2,Queue *q3,Queue *q4)
{
    for (int i = 0; !q->isEmpty(); i++)
    {
        int val = q->dequeue();
        if(0 == val % 4) q1->enqueue(val);
        else if (0 == val % 3) q2->enqueue(val);
        else if (0 == val % 2) q3->enqueue(val);
        else q4->enqueue(val);
    }
}
int main ()

{
    Queue q(20);
    q.enqueue(123);
    q.enqueue(456);
    q.enqueue(789);
    q.enqueue(101);
    q.enqueue(112);
    q.enqueue(131);
    q.enqueue(415);
    q.enqueue(161);
    q.enqueue(718);
    q.enqueue(192);
    q.enqueue(202);
    q.enqueue(212);
    q.enqueue(223);
    q.enqueue(242);
    q.enqueue(526);
    q.enqueue(272);
    q.enqueue(829);
    q.enqueue(303);
    q.enqueue(330); 
    q.enqueue(313);
    q.enqueue(415);
    q.enqueue(161);
    cout<<endl<<"Now divivding into four queues";
    Queue q1(20);
    Queue q2(20);
    Queue q3(20);
    Queue q4(20);

    perfromSecurityCheck(&q , &q1, &q2, &q3, &q4);

    cout<<endl<<"Queue 1: ";
    for (int i = 0; i<q1.size(); i++) {
        cout<<q1.dequeue() <<" ";
    }
    cout<<endl<<"Queue 2: ";
    for (int i = 0; i<q2.size(); i++) {
        cout<<q2.dequeue() <<" ";
    }
    cout<<endl<<"Queue 3: ";
    for (int i = 0; i<q3.size(); i++) {
        cout<<q3.dequeue() <<" ";
    }
    cout<<endl<<"Queue 4: ";
    for (int i = 0; i<q4.size(); i++) {
        cout<<q4.dequeue() <<" ";
    }

    return 0;
}