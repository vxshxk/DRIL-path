#include<iostream>
using namespace std;

template<typename T>
bool Comparator(T num1, T num2){
    const float delta=0.1;
    return (abs(num1-num2)<delta);
}

template<typename T, typename... Ts>
bool Comparator(T num1, Ts... numn){
    const float delta=0.1;
    return ((abs(num1-numn)<delta) && ...);
}

int main(){
    if(Comparator(3.05,3.0,3.03)) cout<<"The numbers are equal/almost equal"<<"\n";
    else cout<<"The numbers are not equal"<<"\n";
    if(Comparator(3.15,3.0,3.03)) cout<<"The numbers are equal/almost equal"<<"\n";
    else cout<<"The numbers are not equal"<<"\n";
    return 0;
}