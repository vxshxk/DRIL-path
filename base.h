#ifndef BASE_H
#define BASE_H

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
#endif