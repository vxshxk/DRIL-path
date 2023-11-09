#ifndef STACK_H
#define STACK_H
#include "base.h"
#include <vector>

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
#endif