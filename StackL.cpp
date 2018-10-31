#include "StackL.h"
#include <iostream>

int Stack::size()
{
    return data.size();
}
void Stack::push(int x)
{
	 data.insert(x,1);
}
void Stack::pop()
{
	 data.remove(1);
}
int Stack::top()
{
	return data.get(1);
}
void Stack::clear()
{
	 data.clear();
}
