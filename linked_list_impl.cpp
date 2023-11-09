#include "linked_list.h"
#include "base.h"
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
