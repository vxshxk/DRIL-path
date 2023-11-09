#include <iostream>
#include<vector>
using namespace std;
class BaseDataStructure
{
public:
    virtual void operator+=(int value) = 0;
    virtual void operator-=(int value) = 0;
    virtual bool operator==(BaseDataStructure &ds) = 0;
    virtual bool operator!=(BaseDataStructure &ds) = 0;
    virtual void operator+(BaseDataStructure &ds) = 0;
    virtual void operator<<(int m) = 0;
    virtual void operator=(BaseDataStructure &ds) = 0;
};

class Array : public BaseDataStructure
{
private:
    std::vector<int> array;

public:
    void operator+=(int value) override;
    void operator-=(int value) override;
    bool operator==(BaseDataStructure &ds) override;
    bool operator!=(BaseDataStructure &ds) override;
    void operator+(BaseDataStructure &ds) override;
    void operator<<(int m) override;
    void operator=(BaseDataStructure &ds) override;
};

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
    Array *dsa = dynamic_cast<Array *>(&ds);
    for (int i : dsa->array)
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

class Stack : public BaseDataStructure
{
private:
    std::vector<int> stack;

public:
    void operator+=(int value) override;
    void operator-=(int value) override;
    bool operator==(BaseDataStructure &ds) override;
    bool operator!=(BaseDataStructure &ds) override;
    void operator+(BaseDataStructure &ds) override;
    void operator<<(int m) override;
    void operator=(BaseDataStructure &ds) override;
};

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
    Stack *dsa = dynamic_cast<Stack*>(&ds);
    for (int i : dsa->stack)
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
    Stack *dsa = dynamic_cast<Stack*>(&ds);
    for (int i : dsa->stack)
    {
        stack.push_back(i);
    }
}





class LinkedList : public BaseDataStructure {
private:
    struct node {
        int data;
        node* link;
    };

    node* head=nullptr;

public:
    void operator+=(int value) override;
    void operator-=(int value) override;
    bool operator==(BaseDataStructure &ds) override;
    bool operator!=(BaseDataStructure &ds) override;
    void operator+(BaseDataStructure &ds) override;
    void operator<<(int m) override;
    void operator=(BaseDataStructure &ds) override;
};


#include<iostream>
using namespace std;

    void LinkedList::operator+=(int value) {
        node* newNode = new node;
        newNode->data= value;
        newNode->link=nullptr;
        if(head==nullptr) head=newNode;
        else{
            node* temp = head;
            while(temp->link!=nullptr) temp=temp->link;
            temp->link=newNode;
        }

    }
    void LinkedList::operator-=(int value) {
        node* temp = head;
        while((temp->link)->link!=nullptr) temp=temp->link;
        temp->link=nullptr;

    }
    bool LinkedList::operator==(BaseDataStructure &ds) {
        node* temp = head;
        LinkedList *dsa = dynamic_cast<LinkedList*>(&ds);
        node* head2= dsa->head;
        while (temp != nullptr && head2 != nullptr) {
        if (temp->data != head2->data) {
            return false;  // Data mismatch, the linked lists are not equal
        }
        temp = temp->link;
        head2 = head2->link;
    }

    // If one of the lists is longer than the other, they are not equal
    return (temp == nullptr && head2 == nullptr);
    }


    bool LinkedList::operator!=(BaseDataStructure &ds) {
        node* temp = head;
        LinkedList *dsa = dynamic_cast<LinkedList*>(&ds);
        node* head2= dsa->head;
        while (temp != nullptr && head2 != nullptr) {
        if (temp->data != head2->data) {
            return true;  // Data mismatch, the linked lists are not equal
        }
        temp = temp->link;
        head2 = head2->link;
    }

    // If one of the lists is longer than the other, they are not equal
    return !(temp == nullptr && head2 == nullptr);
    }


    void LinkedList::operator+(BaseDataStructure &ds) {
        LinkedList *dsa = dynamic_cast<LinkedList*>(&ds);
        node* temp =head;
        node* head2= dsa->head;
            while(temp->link!=nullptr) temp=temp->link;
            temp->link=dsa->head;
    }
    void LinkedList::operator<<(int m) {
         node* current = head;
    while (current != nullptr) {
        cout<<current->data<<" ";
        current = current->link;
    }
    }
    void LinkedList::operator=(BaseDataStructure &ds) {
        LinkedList *dsa = dynamic_cast<LinkedList*>(&ds);
        node* temp = head;
        node* head2= dsa->head;
        while(head2->data!=NULL) {
              temp->data=head2->data;
              temp=temp->link;
              head2=head2->link; 
        } 
    }






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