//
// Created by rajam on 5/24/2024.
//

#ifndef HEAPTYPE_H
#define HEAPTYPE_H


template<class t>
struct HeapType {
    void ReheapDown(int root,int bottom);
    void ReheapUp(int root,int bottom);
    t* elements;
    int numElements;
};



#endif //HEAPTYPE_H
