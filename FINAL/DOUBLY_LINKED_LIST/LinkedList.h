#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList
{
private:
	Node* head;
	Node* tail;
public:
	LinkedList() { 
		head = nullptr;
		tail = nullptr;
	}

	// inserting at Head
	void insertAtHead(int val)
	{
		Node* tempNode = new Node(val);
		if (head == nullptr)
		{
			head = tempNode;
			tail = tempNode;
			return;
		}
		else
		{
			tempNode->next = head;
			head->prev = tempNode;
			head = tempNode;
		}
	}

	// node count
	int nodeCount()
	{
		int size = 0;
		if (head == nullptr) return 0;

		else
		{
			Node* tempHead = head;
			Node* tempTail = tail;
			while (tempHead != tempTail && tempHead->next != tempTail)
			{
				tempHead = tempHead->next;
				tempTail = tempTail->prev;
				size++;
			}

			if (tempHead == tempTail)
			{
				size = 2 * (size + 1);
			}
			else
			{
				size = (2 * size) + 1;
			}
		}
		return size;
		
	}

	// insert at tail
	void insertAtTail(int val)
	{
		Node* tempNode = new Node(val);
		if (head == nullptr)
		{
			insertAtHead(val);
		}
		else
		{
			tempNode->prev = tail;
			tail->next = tempNode;
			tail = tempNode;
		}
	}

	void insertAtSpecific(int k, int val)
	{
		Node* tempHead = head;

		if (head == nullptr)
		{
			insertAtHead(val);
		}
		else
		{
			int size = nodeCount();
			if (size <= k)
			{
				insertAtTail(val);
			}
			else
			{
				for (int i = 0; i < k - 1; i++)
				{
					tempHead = tempHead->next;
				}
				// now i have to add betwween tempHead and tempHead->next
				Node* tempNode = new Node(val);
				tempNode->next = tempHead->next;
				tempNode->prev = tempHead;
				tempHead->next = tempNode;
				tempHead->next->prev = tempNode;
			}

		}
	}

	// display from head
	void displayFromHead()
	{
		Node* tempHead = head;
		while (tempHead != nullptr)
		{
			cout << tempHead->data << " ";
			tempHead = tempHead->next;
		}
	}

	void displayFromTail()
	{ 
		Node* tempTail = tail;
		while (tempTail != nullptr)
		{
			cout << tempTail->data << " ";
			tempTail = tempTail->prev;
		}
	}
};