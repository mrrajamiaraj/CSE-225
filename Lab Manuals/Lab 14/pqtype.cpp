//
// Created by rajam on 5/24/2024.
//

#include "pqtype.h"
template<class t>
PQType<t>::PQType(int max)
{
    maxItems = max;
    items.elements=new t[max];
    length = 0;
}
template<class t>
PQType<t>::~PQType()
{
    delete [] items.elements;
}
template<class t>
void PQType<t>::MakeEmpty()
{
    length = 0;
}
template<class t>
bool PQType<t>::IsEmpty()
{
    return (length == 0);
}
template<class t>
bool PQType<t>::IsFull()
{
    return length == maxItems;
}
template<class t>
void PQType<t>::Enqueue(t item) {
    if(length==maxItems)throw FullPQ();
    else {
        length++;
        items.elements[length-1]=item;
        items.ReheapUp(0,length-1);
    }
}
template<class t>
void PQType<t>::Dequeue(t &item) {
    if(length==0)throw EmptyPQ();
    else {
        item = items.elements[0];
        items.elements[0]=items.elements[length-1];
        length--;
        items.ReheapDown(0,length-1);
    }
}
