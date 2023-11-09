#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "base.h"

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

#endif
