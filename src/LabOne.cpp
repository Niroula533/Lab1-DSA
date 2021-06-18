#include<iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main() {
	//LinkedList's Method Implementation
	std::cout << "LINKED-LIST METHODS" << std::endl;

	LinkedList list;
	//addToHead() method with traverse
	std::cout << "addToHead Method" << std::endl;
	list.addToHead(7);
	list.traverse();
	std::cout << std::endl;

	list.addToHead(8);
	list.addToHead(9);
	list.traverse();
	std::cout << std::endl;

	//addToTail method
	std::cout << "addToTail Method" << std::endl;
	list.addToTail(6);
	list.addToTail(5);
	list.traverse();
	std::cout << std::endl;

	//search method
	std::cout << "Search whether a data exists or not" << std::endl;
	bool msg = list.search(900);
	msg ? std::cout << "Found" : std::cout << "Not Found";
	std::cout << std::endl;
	

	//removeFromHead method
	std::cout << "removeFromHead method" << std::endl;
	list.removeFromHead();
	list.traverse();
	std::cout << std::endl;

	//remove node containing given value
	std::cout << "remove method" << std::endl;
	list.remove(7);
	list.traverse();
	std::cout << std::endl;

	//retrieve method
	std::cout << "retrieve Method" << std::endl;
	Node* ptr = nullptr;
	list.retrieve(6, ptr);
	std::cout << std::endl;
	ptr == nullptr ? std::cout << "Node Not Found" : std::cout << ptr->info << " is the info stored in the pointer";
	std::cout << std::endl;

	//add another node after any node
	std::cout << "Add Method" << std::endl;
	list.add(69, ptr);
	list.traverse();
	std::cout << std::endl;
	

	
	//Stack Implementation
	std::cout << "STACK IMPLEMENTATION" << std::endl << std::endl;

	Stack stack;

	//Checking if Empty or nor
	std::cout << "Checking whether Stack is Empty or Not" << std::endl;
	bool msgStack = stack.isEmpty();
	msgStack == true ? std::cout<<"Empty" : std::cout<<"Not Empty";
	std::cout << std::endl << std::endl;

	//push operation
	std::cout << "Push Operations in Stack" << std::endl;
	stack.push(7);
	stack.printStack();
	stack.push(6);
	stack.push(5);
	stack.push(4);
	stack.push(3);
	stack.push(2);
	stack.push(1);
	stack.printStack();
	std::cout << std::endl;


	//pop operation
	std::cout << "Pop Operations in Stack" << std::endl;
	stack.pop();
	stack.printStack();
	stack.pop();
	stack.pop();
	stack.printStack();
	std::cout << std::endl;

	// printing top value in stack
	std::cout << "Top Node's Data" << std::endl;
	std::cout << stack.top() << std::endl << std::endl << std::endl << std::endl;
	

	
	//Queue Implementation
	std::cout << "QUEUE IMPLEMENTATION" << std::endl << std::endl;

	Queue q;

	//Enqueuing Data in Queue
	std::cout << "ENQUEUING DATA IN QUEUE" << std::endl;

	q.enqueue(3);
	q.printQueue();
	q.enqueue(2);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(9);
	q.printQueue();
	std::cout << std::endl;


	//Dequeuing Data in Queue
	std::cout << "AFTER DEQUEING DATA IN QUEUE" << std::endl;

	q.dequeue();
	q.printQueue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.printQueue();
	std::cout << std::endl;


	//Printing Front And Rear Element in Queue
	std::cout << "Value of Front Node : " << q.front();
	std::cout << std::endl;
	std::cout << "Value of Rear Node : " << q.rear();
	std::cout << std::endl;
	

}