//
// Created by rajam on 5/23/2024.
//

#include "quetype.h"
#include<iostream>
using namespace std;
template<class t>
quetype<t>::quetype() {
    maxQue = 5;
    front = maxQue-1;
    rear = maxQue-1;
    item = new t[maxQue];
}
template<class t>
quetype<t>::quetype(int x) {
    maxQue = x+1;
    front = maxQue-1;
    rear = maxQue-1;
    item = new t[maxQue];
}
template<class t>
quetype<t>::~quetype() {
    delete[]item;
}

template<class t>
void quetype<t>::makeempty() {
    rear=maxQue-1;
    front=maxQue-1;
}

template<class t>
bool quetype<t>::isempty() {
     return (rear==front);
}
template<class t>
bool quetype<t>::isfull() {
    return((rear+1)%maxQue==front);
}

template<class t>
void quetype<t>::enque(t items) {
    if(isfull())throw FullQueue();

        rear = (rear+1)%maxQue;
        item[rear]=items;

}

template<class t>
void quetype<t>::deque(t &items) {
    if(isempty())throw EmptyQueue();
    else {
        front=(front+1)%maxQue;
        items = item[front];
    }
}

