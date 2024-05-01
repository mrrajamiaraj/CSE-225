#ifndef SORTED_H_INCLUDED
#define SORTED_H_INCLUDED
#include <bits/stdc++.h>

const int MAX =10 ;
template<class t>
class sorted{
    public :
    int length;
    int currentpos;
    t array[MAX];
    sorted();
    void makeempty();
    void resetlist();
    bool isfull();
    int lengthis();
    void getnext(t&);
    void insert(t);
    void delet(t);
    void retrive(t&,bool&);
};

#endif