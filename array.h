#ifndef ARRAY_H
#define ARRAY_H
#include "base.h"
#include <vector>

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
#endif