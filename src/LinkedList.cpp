#include<iostream>
#include "LinkedList.h"



bool LinkedList::isEmpty() {
	return (Head == nullptr);
}

void LinkedList::addToHead(int data) {
	Node* newNode = new Node(data);
	newNode->next = Head;
	Head = newNode;
	if (Tail == nullptr)
		Tail = Head;
}

void LinkedList::addToTail(int data) {
	Node* newNode = new Node(data);
	if (Tail == nullptr) {
		Tail = newNode;
	}
	else {
		Tail->next = newNode;
		Tail = newNode;
	}
	if (Head == nullptr)
		Head = Tail;
}

void LinkedList::traverse() {
	Node* temp = Head;
	while (temp != nullptr) {
		std::cout << temp->info << "\t";
		temp = temp->next;
	}
	std::cout << std::endl;
}

void LinkedList::add(int data, Node* predecessor)
{
	Node* newNode = new Node(data);
	newNode->next = predecessor->next;
	predecessor->next = newNode;
}

void LinkedList::removeFromHead()
{
	if (!LinkedList::isEmpty()) {
		Node* nodeAtHead = new Node;
		nodeAtHead = Head;
		Head = nodeAtHead->next;
		delete nodeAtHead;
	}

}


void LinkedList::remove(int data)
{
	if (Head->info == data)
	{
		LinkedList::removeFromHead();
		return;
	}
	Node* nodeToRemove = new Node;
	nodeToRemove = Head->next;
	Node* prev = Head;
	while (nodeToRemove != nullptr) {
		if (nodeToRemove->info == data)
			break;
		prev = nodeToRemove;
		nodeToRemove = nodeToRemove->next;
	}
	prev->next = nodeToRemove->next;
	delete nodeToRemove;
}


bool LinkedList::search(int data) {
	Node* temp = Head;
	while (temp != nullptr) {
		if (temp->info == data)
			return true;
		temp = temp->next;
	}
	return false;
}

void LinkedList::retrieve(int data, Node*& outputPtr)
{
	Node* temp = Head;
	while (temp != nullptr)
	{
		if (temp->info == data)
		{
			outputPtr = temp;
			break;
		}
		temp = temp->next;
	}
}