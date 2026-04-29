#pragma once
class Node
{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int data)
	{
		this->data = data;
		next = nullptr;
		prev = nullptr;
	}
};