#include<iostream>
#include "Stack.h"
#include "LinkedList.h"


bool Stack::isEmpty() {
	return list.isEmpty();
}

void Stack::push(int data){
	list.addToHead(data);
}

void Stack::pop() {
	list.removeFromHead();
}

int Stack::top()
{
	Node* temp = list.getHead();
	return temp->info;
}

void Stack::printStack() {
	std::cout << "The Elements in Stack: " << std::endl;
	list.traverse(); 
}



