//
// Created by rajam on 5/24/2024.
//

#ifndef PQTYPE_H
#define PQTYPE_H
#include "heaptype.h"
#include "heaptype.cpp"
class FullPQ
{};
class EmptyPQ
{};

template<class t>
class PQType
{
public:
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(t);
    void Dequeue(t&);
private:
    int length;
    HeapType<t> items;
    int maxItems;
};



#endif //PQTYPE_H
