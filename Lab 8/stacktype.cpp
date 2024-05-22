//
// Created by rajam on 5/22/2024.
//

#include "stacktype.h"

template<class t>
stacktype<t>::stacktype() {
    top = -1;
}
template<class t>
bool stacktype<t>::isfull() {
    return (top==MAX-1);
}
template<class t>
bool stacktype<t>::isempty() {
    return(top == -1);
}
template<class t>
void stacktype<t>::push(t item) {
    if(isfull()) throw fullstack();
    top++;
    array[top]=item;
}
template<class t>
void stacktype<t>::pop() {
    if(isempty())throw empystack();
    top--;
}
template<class t>
t stacktype<t>::Top() {
    if(isempty())throw empystack();
    return array[top];
}





