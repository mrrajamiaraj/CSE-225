#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED

const int MAX =5;

template<class t>
class unsorted{
    public :
    int currentpos;
    int length;
    t array[MAX];
    unsorted();
    void resetlist();
    void emptylist();
    int getlength();
    bool isfull();
    void insert(t);
    void delet(t);
    void retrive(t&, bool&);
    void getnext(t&);


};

#endif