#include <iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
    LinkedList list;
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtTail(2);
    list.insertAtTail(1);

    // Check if the linked list is a palindrome
    if (list.isPalindrome())
    {
        cout << "The linked list is a palindrome." << endl;
    }
    else
    {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}