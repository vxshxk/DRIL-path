#ifndef STACK_IMPL_H
#define STACK_IMPL_H
#include "stack.h"
#include<iostream>
using namespace std;

void Stack::operator+=(int value)
{
    stack.push_back(value);
}

void Stack::operator-=(int value)
{
    if (!stack.empty())
    {
        stack.pop_back();
    }
}

bool Stack::operator==(BaseDataStructure &ds)
{
    Stack dsa = dynamic_cast<Stack &>(ds);
    int i = 0;
    for (int element : stack)
    {
        if (element != dsa.stack[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

bool Stack::operator!=(BaseDataStructure &ds)
{
    Stack dsa = dynamic_cast<Stack &>(ds);
    return !(dsa.stack == stack);
}

void Stack::operator+(BaseDataStructure &ds)
{
    for (int i : stack)
    {
        stack.push_back(i);
    }
}

void Stack::operator<<(int m)
{
    for (int element : stack)
    {
        cout << element << " ";
    }
}

void Stack::operator=(BaseDataStructure &ds)
{
    Stack *dsa = dynamic_cast<Stack *>(&ds);
    for (int i : dsa->stack)
    {
        stack.push_back(i);
    }
}
#endif