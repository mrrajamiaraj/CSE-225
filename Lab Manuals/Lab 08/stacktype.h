//
// Created by rajam on 5/22/2024.
//

#ifndef STACKTYPE_H
#define STACKTYPE_H
#include<iostream>
using namespace std;
const int MAX =5;


class fullstack{
};
class empystack{
};


template <class t>
class stacktype {
private:
    int top;
    t array[MAX];
public:
    stacktype();
    bool isfull();
    bool isempty();
    void push(t);
    void pop();
    t Top();

};



#endif //STACKTYPE_H
