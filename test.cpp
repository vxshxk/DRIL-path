#include <iostream>
#include <vector>
#include <list>
using namespace std;

class BaseDataStructure
{
    
public:
    vector<int> array;
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
    vector<int> array;

public:
    void operator+=(int value)
    {
        array.push_back(value);
    }
    void operator-=(int value)
    {
        if (!array.empty())
        {
            array.pop_back();
        }
    }
    bool operator==(BaseDataStructure &ds)
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
    bool operator!=(BaseDataStructure &ds)
    {
        Array dsa = dynamic_cast<Array &>(ds);
        return !(dsa.array == array);
    }
    void operator+(BaseDataStructure &ds)
    {
        for (int i : array)
        {
            array.push_back(i);
        }
    }
    void operator<<(int m)
    {
        for (int element : array)
        {
            cout << element << " ";
        }
    }

    void operator=(BaseDataStructure &ds)
    {
        Array* dsa = dynamic_cast<Array*>(&ds);
        for (int i : dsa->array)
        {
            array.push_back(i);
        }
    }
};
/*
struct node{
    int data;
    struct node* link;
};


class LinkedList : public BaseDataStructure {
private:
    list<node> linkedList;
    struct node* head=nullptr;
    struct node* tail=nullptr;
    struct node* current=nullptr;
public:
    void operator+=(int value)
    {
        struct node *new_node = new node;
        new_node->data = value;
        new_node->link = nullptr;
        if (head == NULL)
        {
            head = new_node;
        }

        struct node *current = head;
        while (current->link != NULL)
        {
            current = current->link;
        }
        current->link = new_node;
    }
    void operator-=(int value)
    {
        struct node* current=nullptr;
        while(current->link!=tail){
            current=current->link;
        }
        current->link=NULL;
        tail=current;
    }
    bool operator==(BaseDataStructure &ds)
    {
        cout<<"SEX";
        return true;
    }
    bool operator!=(BaseDataStructure &ds)
    {
     cout<<"SEX";
        return false;
    }
    void operator+(BaseDataStructure &ds)
    {
        
        cout<<"SEX";
    }
    void operator<<(int m)
    {
      while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->link;
      }
    }

    void operator=(BaseDataStructure &ds)
    {
      cout<<"SEX";
    }
};*/

class Stack : public BaseDataStructure
{
private:
    vector<int> array;

public:
    void operator+=(int value)
    {
        array.push_back(value);
    }
    void operator-=(int value)
    {
        if (!array.empty())
        {
            array.pop_back();
        }
    }
    bool operator==(BaseDataStructure &ds)
    {
        Stack dsa = dynamic_cast<Stack &>(ds);
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
    bool operator!=(BaseDataStructure &ds)
    {
        Stack dsa = dynamic_cast<Stack &>(ds);
        return !(dsa.array == array);
    }
    void operator+(BaseDataStructure &ds)
    {
        for (int i : array)
        {
            array.push_back(i);
        }
    }
    void operator<<(int m)
    {
        for (int element : array)
        {
            cout << element << " ";
        }
    }

    void operator=(BaseDataStructure &ds)
    {

        for (int i : ds.array)
        {
            array.push_back(i);
        }
    }
};


int main()
{
    Stack a;
    a += 1;
    a += 2;
    Stack a1;
    a1 += 1;
    a1 += 3;
    a1 << 0;
    cout << (a == a1);
    cout << (a != a1);
    Stack a3;
    a3+a;
    a3=a1;
    a<<0;
    a1-=3;
    a1 << 0;
    return 0;
}