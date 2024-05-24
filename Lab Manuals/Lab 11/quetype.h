//
// Created by rajam on 5/22/2024.
//

#ifndef QUETYPE_H
#define QUETYPE_H
class FullQueue{};
class EmptyQueue{};

template <class t>
class quetype {
    struct NodeType {
        t info;
        NodeType* next;


    };
public:
    quetype();
    bool isempty();
    bool isfull();
    void makeempty();
    void Enqueue(t);
    void Dequeue(t&);

private:
    NodeType *front, *rear;

};



#endif //QUETYPE_H
