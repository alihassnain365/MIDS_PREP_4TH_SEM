#include <iostream>
#include "Node.h"
using namespace std;
class LinkedList
{
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList(){ head = nullptr; tail= nullptr; }
    void insertAtEnd(int val)
    {
        Node* tempNode = new Node(val);
        // if ll is empty
        if(head == nullptr)
        {
            head = tempNode;
            tail = tempNode;
            return;
        }
        else
        {
            // inserting at tail
            tail->next = tempNode;
            tempNode->prev = tail;
            tail = tempNode;
        }
    }

    void insertAtHead(int val)
    {
        Node* tempNode = new Node(val);
        if(head == nullptr)
        {
                head = tempNode;
                tail = tempNode;
        }
        else 
        {
            tempNode->next = head;
            head->prev = tempNode;
            head = tempNode;
        }
    }

    void insertAtSpecific(int k, int val)
    {
        int position = k;
        if(head == nullptr)
        {
            insertAtHead(val);
        }
        else
        {
            Node* tempHead = head;
            while(tempHead->next != nullptr && k != 0)
            {
                tempHead = tempHead->next;
            }

            Node* tempNode = new Node(val);
            tempNode->next = tempHead;
            tempNode->prev = tempHead->prev;
            tempHead->prev->next = tempNode;
            tempHead->prev = tempNode;
        } 
    }

};