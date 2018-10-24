#include "StackL.h"
#include <iostream>

int Stack::size()
{
    return data.size();
}
void Stack::push(int x)
{
	 data.push_back(x);
}
void Stack::pop();
{
	 data.pop_back();
}
int Stack::top()
{
	int i = 0;
	i = data.size()-1;
	return data[i];
}
void Stack::clear()
{
	 while (size() !=0)
	 data.pop_back();
}
