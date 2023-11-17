#include<iostream>
using namespace std;

template <int N>
class Factorial{
    public: 
    static const int value= N*Factorial<N-1>::value; 
};

template<>
class Factorial<0>{
    public: 
    static const int value=1;
};

int main(){
    constexpr int fact7=Factorial<7>::value;
    cout<<fact7<<endl;
    return 0;
}