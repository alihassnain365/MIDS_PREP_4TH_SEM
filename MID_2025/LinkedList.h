#include <iostream>
#include "Node.h"
using namespace std;
class LinkedList
{
private:
    Node *head;
public:
    LinkedList() : head(nullptr) {}
    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int nodeCount()
    {
        int count = 0;
        Node* tempHead = head;
        while(tempHead->next!= nullptr)
        {
            count++;
        }
        return count;
    }

    int nodeSume()
    {
        int sum = 0;
        Node* tempHead = head;
        while(tempHead->next!= nullptr)
        {
            sum+=tempHead->data;
        }
        return sum;
    }

    bool checkIfPalindrome()
    {
        // going to the half of the palindrome
        Node *slow = nullptr;
        Node *fast = nullptr;
        slow = fast = head;
        while (fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // slow is the mid
        // now reversing the ll after the slow
        Node* curr;
        Node* next;
        Node* prev;
        curr = slow;
        while(curr!=nullptr)
        {
            next = curr->next;
            curr->next = prev;
            curr = next;
            prev = curr;
            
        }
        // now prev is the start of the reversed ll

        // comparing the after and berfore slow
        while(head->next != slow and prev != nullptr)
        {
            if(head->data != prev->data) 
                return false;
        }
        return true;
        
    }
};