#include <iostream>
#include "stack.h"
#include "queue.h"
using namespace std;

bool isOperator(int op)
{
    if (-1 == op or -2 == op or -3 == op)
    {
        return true;
    }
    else
        return false;
}

void doCalculation(Stack &stack1,Stack &stack2,  Queue &q)
{

    while (!q.isEmpty())
    {
        stack1.push(q.dequeue());
    }

    while (!stack1.isEmpty())
    {
        int val = stack1.pop();
        if (isOperator(val))
        {
            if (stack2.isEmpty())
            {
                cout << endl
                     << "Wrong input given";
                return;
            }
            else
            {
                int operand1 = stack2.pop();
                if (stack2.isEmpty())
                    return;
                int operand2 = stack2.pop();
                // now doing math
                if (-3 == val)
                {
                    stack2.push(operand1 / operand2);
                }
                else if (-2 == val)
                {
                    stack2.push(operand1 * operand2);
                }
                else if (-1 == val)
                {
                    stack2.push(operand1 + operand2);
                }
            }
        }
        else
        {
            stack2.push(val);
        }
    }
}
int main()
{
    Stack s1(20);
    Stack s2(20);
    Queue q(20);
    q.enqueue(-3);
    q.enqueue(-2);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(5);
    doCalculation(s1 , s2 , q);
    cout << endl
         << "Result of expression is : " << s2.pop();
    return 0;
}