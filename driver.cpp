#include <iostream>
using namespace std;
#include "array_impl.cpp"
#include "base.h"
#include "array.h"
#include "stack.h"
#include "stack_impl.cpp"
int main()
{   
    Array a;
    a += 1;
    a += 2;
    Array a1;
    a1 += 1;
    a1 += 3;
    a1 << 0; // Display the elements in a1
    cout<<endl; // Check if a and a1 are equal or not
    cout << "a == a1: " << (a == a1) << endl;
    cout << "a != a1: " << (a != a1) << endl;
    a << 0; // Display the elements in a
    a1 -= 3; // Remove an element from a1
    a1 << 0; // Display the elements in a1

    
    Stack s;
    s += 1;
    s += 2;
    Stack s1;
    s1 += 1;
    s1 += 3;
    s1 << 0; // Display the elements in a1
    cout<<endl; // Check if a and a1 are equal or not
    cout << "s == s1: " << (s == s1) << endl;
    cout << "s != s1: " << (s != s1) << endl;
    s << 0; // Display the elements in a
    s1 -= 3; // Remove an element from a1
    s1 << 0; // Display the elements in a1
    return 0;
}
