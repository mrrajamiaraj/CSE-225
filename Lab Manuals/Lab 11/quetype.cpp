//
// Created by rajam on 5/22/2024.
//

#include "quetype.h"|
#include <iostream>
using namespace std;

template<class t>
quetype<t>::quetype() {
    front = NULL;
    rear = NULL;
}

template<class t>
bool quetype<t>::isempty() {
    return (rear==NULL);
}

template<class t>
bool quetype<t>::isfull() {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (exception e) {
        return true;
    }

}

template<class t>
void quetype<t>::makeempty() {
    NodeType* temp;
    while(front!=NULL) {
        temp = front;
        front = front->next;
        delete front;
    }
}

template<class t>
void quetype<t>::Enqueue(t item) {
    if(isfull())throw FullQueue();
    else {
        NodeType* location;
        location = new NodeType;
        location->info=item;
        location->next=NULL;
        if(front==NULL) {
            rear =NULL;
        }



    }
}

template<class t>
void quetype<t>::Dequeue(t &item) {
    if(isempty())throw EmptyQueue();
    else {
        NodeType* temp;
        temp = front;
        item = front->info;
        front = front->next;
        if(front==NULL) {
            rear = NULL;
        }
        delete temp;
    }
}







