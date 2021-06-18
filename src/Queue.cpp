#include<iostream>
#include "Queue.h"

int Queue::rear()
{
	Node* temp = list.getTail();
	return temp->info;
}

int Queue::front()
{
	Node* temp = list.getHead();
	return temp->info;
}

bool Queue::isEmpty()
{
	return list.isEmpty();
}

void Queue::enqueue(int data)
{
	list.addToTail(data);
}

void Queue::dequeue()
{
	list.removeFromHead();
}

void Queue::printQueue() {
	std::cout << "The Elements in Queue: " << std::endl;
	list.traverse(); 
}