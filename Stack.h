#pragma once
#include "LinkedList.h"

class Stack {
private:
	LinkedList list;
public:
	Stack() { LinkedList list; }
	virtual bool isEmpty();
	virtual void push(int data);
	virtual void pop();
	virtual int top();
	void printStack();
};