#ifndef ARRAY_IMPL_H
#define ARRAY_IMPL_H
#include "array.h"
#include<iostream>
using namespace std;

void Array::operator+=(int value)
{
    array.push_back(value);
}

void Array::operator-=(int value)
{
    if (!array.empty())
    {
        array.pop_back();
    }
}

bool Array::operator==(BaseDataStructure &ds)
{
    Array dsa = dynamic_cast<Array &>(ds);
    int i = 0;
    for (int element : array)
    {
        if (element != dsa.array[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

bool Array::operator!=(BaseDataStructure &ds)
{
    Array dsa = dynamic_cast<Array &>(ds);
    return !(dsa.array == array);
}

void Array::operator+(BaseDataStructure &ds)
{
    for (int i : array)
    {
        array.push_back(i);
    }
}

void Array::operator<<(int m)
{
    for (int element : array)
    {
        std::cout<< element << " ";
    }
}

void Array::operator=(BaseDataStructure &ds)
{
    Array *dsa = dynamic_cast<Array *>(&ds);
    for (int i : dsa->array)
    {
        array.push_back(i);
    }
}
#endif
