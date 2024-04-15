#include "array.h"
#include<iostream>
using namespace std;

template<class T>
arr<T>::arr(){
    array = NULL;
    size = 0;
}
template<class T>
arr<T>::arr(int size){
    array = new T[size];
}
template<class T>
arr<T>::~arr(){
    delete[] array;
}
template<class T>
void arr<T>::setvalue(int index,T value){
    array[index]=value;
}
template<class T>
T arr<T>::getvalue(int index){
    return array[index];
}

