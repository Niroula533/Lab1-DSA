#pragma once
class Node {
public:
	int info;
	Node* next;
	Node(int info=0, Node* next = nullptr) :info(info), next(next) {}
};

class LinkedList
{
private:
	Node* Tail;
	Node* Head;
public:
	LinkedList() {
		Head = nullptr;
		Tail = nullptr;
	}
	virtual bool isEmpty();
	virtual void addToHead(int data);
	virtual void addToTail(int data);
	virtual void add(int data, Node* predecessor);
	virtual void removeFromHead();
	virtual void remove(int data);
	virtual void retrieve(int data, Node*& outputPtr);
	virtual bool search(int data);
	virtual void traverse();
	Node* getHead() { return Head; }
	Node* getTail() { return Tail; }
};
