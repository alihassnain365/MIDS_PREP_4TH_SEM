#include<iostream>
#include "node.h"
using namespace std;

class LinkedList
{
    private:
        Node * head;
    public:
        LinkedList()
        {
            head = nullptr;
        }

    void insertAtHead(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void deleteAtHead()
    {
        if (head == nullptr)
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;   
    }

    void insertAtTail(int value)
    {
        Node* newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    void deleteFromTail()
    {
        if (head == nullptr)
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void display()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


    Node* findReverse(Node* head)
    {
        Node* curr = head;
        Node* prev = nullptr;
        Node* next = nullptr;
        while(curr!= nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node* findMiddle(Node* head)
    {
        Node* fast;
        Node* slow;
        fast = slow = head;
        while(fast != nullptr and fast->next !=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // sroting the linked list
    void srtList()
    {
        
    }

    bool isPalindrome()
    {
        /*
            1. find the middle
            2. reverse the list onwards the middle excluding middle
            3. compare while (midleOnward!=nullptr) 
            4. then return the original linkedList back
        */
        Node* tempHead = head;
        Node* middle = findMiddle(tempHead);
        Node* reverse = findReverse(middle);

    }
};