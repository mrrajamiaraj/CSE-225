//
// Created by rajam on 5/22/2024.
//

#ifndef STACKTYPE_H
#define STACKTYPE_H

class fullstack{};
class emptystack{};

template <class t>
class stacktype {
    struct NodeType {
        t info;
        NodeType* next;
    };
public:
    stacktype();
    ~stacktype();
    bool isempty();
    bool isfull();
    void push(t);
    void pop();
    t Top();
private :
    NodeType *topptr;
};



#endif //STACKTYPE_H
