#include <iostream>
using namespace std;
#include "array_impl.cpp"
#include "base.h"
#include "array.h"
#include "stack.h"
#include "stack_impl.cpp"
#include "linked_list.h"
#include "linked_list_impl.cpp"
int main()
{
    Array a;
    a += 1;
    a += 2;
    Array a1;
    a1 += 1;
    a1 += 3;
    a1 << 0; 
    cout<<endl;// Check if a and a1 are equal or not
    cout << "a == a1: " << (a == a1) << endl;
    cout << "a != a1: " << (a != a1) << endl;
    a << 0; // Display the elements in a
    a1 -= 3; // Remove an element from a1
    a1 << 0; // Display the elements in a1
    a1+a;
    cout<<endl;
    a1<<0;
    


    Stack s;
    s += 1;
    s += 2;
    Stack s1;
    s1 += 1;
    s1 += 3;
    s1+=4;
    s1 << 0; // Display the elements in a1
    cout<<endl; // Check if a and a1 are equal or not
    cout << "s == s1: " << (s == s1) << endl;
    cout << "s != s1: " << (s != s1) << endl;
    s1+s;
    s1 -= 2; // Remove an element from a1
    s << 0; 
    cout<<endl;// Display the elements in a1
    s1 << 0; 
    //s=s1;
    cout<<endl;
    s<<0;
    


    LinkedList l;
    l+=5;
    l+=4;
    l+=2;
    l<<0;
    l-=3;
    cout<<endl;
    l<<0;
    LinkedList l2;
    l2+=2;
    l2+=3;
    l2+l;
    cout<<endl;
    cout<<(l2!=l)<<" ";
    cout<<(l2==l);
    cout<<endl;
    l2<<0;


    return 0;
}
