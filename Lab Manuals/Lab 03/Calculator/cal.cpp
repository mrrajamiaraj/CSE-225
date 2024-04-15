#include<iostream>
#include"cal.h"
using namespace std;
template<class T>
o<T>::o(){
    a=0.0;
    b=0.0;
}
template<class T>
o<T>::o(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T o<T>::add(){
    return a+b;
}
template<class T>
T o<T>::subs(){
    return a-b;
}
template<class T>
T o<T>::multi(){
    return a*b;
}
template<class T>
T o<T>::devide(){
    return a/b;
}
template<class T>
T o<T>::persentage(){
    return (a/b)*100;
}

