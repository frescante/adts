#include "StackLL.h"

class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the stack class)


Stack::~Stack()
{
	while(num_elements > 0)
      clear();
}
int Stack::size()
{
    return num_elements;
}
void Stack::push(int x)
{
	Node* newPtr = new Node{x};
	newPtr -> link= frontPtr;
	frontPtr = newPtr;
	num_elements++;
}
void Stack::pop()
{
	 Node* delPtr = frontPtr;
	 frontPtr = frontPtr->link;
	 delete delPtr;
	 num_elements--;
}
int Stack::top()
{
	 return frontPtr->data;
}
	 
void Stack::clear()
{
	while (size()!=0)
		pop();
}
