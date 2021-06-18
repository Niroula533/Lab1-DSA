#pragma once
#include "LinkedList.h"

class Queue {
private:
	LinkedList list;
public:
	Queue() { LinkedList list; }
	virtual bool isEmpty();
	virtual void enqueue(int data);
	virtual void dequeue();
	virtual int front();
	virtual int rear();
	void printQueue();
};


