//
// Created by rajam on 5/24/2024.
//

#include "heaptype.h"
template <class t>
void Swap(t& one, t &two) {
    t temp;
    temp = one;
    one = two;
    two = temp;
}

template<class t>
void HeapType<t>::ReheapDown(int root, int bottom) {
    int maxchild;
    int leftChild;
    int rightChild;

    leftChild=root*2+1;
    rightChild=root*2+2;

    if(leftChild<=bottom) {
        if(leftChild==bottom) {
            maxchild=leftChild;
        }
        else {
            if(elements[leftChild]<=elements[rightChild]) {
                maxchild=rightChild;
            }
            else
                maxchild=leftChild;
        }
        if(elements[root]<elements[maxchild]) {
            Swap(elements[root],elements[maxchild]);
            ReheapDown(maxchild,bottom);
        }
    }
}
template<class t>
void HeapType<t>::ReheapUp(int root, int bottom) {
    int parent;
    if(bottom>root) {
        parent=(bottom-1)/2;
        if(elements[bottom]>elements[parent]) {
            Swap(elements[parent],elements[bottom]);
            ReheapUp(root,parent);
        }
    }
}
