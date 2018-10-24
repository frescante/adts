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
      clear(1);
}
int Stack::size()
{
    
}
void Stack::push(int x)
{
	Node* newPtr = new Node{val};
	newPtr -> link= frontPtr;
	front
}
void Stack::pop();
{
	 
}
void Stack::top()
{
	 
}
void Stack::clear()
{
	
}
