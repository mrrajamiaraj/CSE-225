//
// Created by rajam on 5/22/2024.
//

#include "stacktype.h"
#include <iostream>
using namespace std;
template<class t>
stacktype<t>::stacktype() {
    topptr = NULL;
}

template<class t>
stacktype<t>::~stacktype() {
    NodeType* tempptr;
    while(topptr!=NULL) {
        tempptr = topptr;
        topptr = topptr->next;
        delete tempptr;
    }
}

template<class t>
bool stacktype<t>::isempty() {
    return (topptr==NULL);
}

template<class t>
bool stacktype<t>::isfull() {
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
void stacktype<t>::push(t item) {
    if(isfull())throw fullstack();
    else {
        NodeType* location;
        location = new NodeType;
        location->info = item;
        location->next = topptr;
        topptr = location;
    }
}

template<class t>
void stacktype<t>::pop() {
    if(isempty())throw emptystack();
    else {
        NodeType* tempptr;
        tempptr = topptr;
        topptr = topptr->next;
        delete tempptr;
    }
}

template<class t>
t stacktype<t>::Top() {
    if(isempty())throw emptystack();
    else
        return  topptr->info;
}





