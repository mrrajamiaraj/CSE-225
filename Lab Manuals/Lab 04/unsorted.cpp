#include "unsorted.h"
#include<iostream>
using namespace std;

template<class t>
unsorted<t>::unsorted(){
    currentpos = -1;
    length =0;
}
template<class t>
void unsorted<t>::resetlist(){
    currentpos = -1;
}
template<class t>
void unsorted<t>::emptylist(){
    length =0;
}
template<class t>
int unsorted<t>::getlength(){
    return length;
}
template<class t>
bool unsorted<t>::isfull(){
    return (length == MAX);
}
template<class t>
void unsorted<t>::insert(t item){
    array[length]=item;
    length++;
}
template<class t>
void unsorted<t>::delet(t item){
    int location =0;
    while(array[location]!=item)
    location++;
    array[location]=array[length-1];
    length--;
}
template<class t>
int unsorted<t>::retrive(t item){
    for (int i = 0; i < length; i++) {
        if (array[i] == item) {
            // If the item is found, return 1 (indicating found)
            return 1;
        }
    }
    // If the item is not found, return -1 (indicating not found)
    return -1;
    
}
template<class t>
void unsorted<t>::getnext(t &item){
    currentpos++;
    item = array[currentpos];
}