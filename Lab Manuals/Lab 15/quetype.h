//
// Created by rajam on 5/25/2024.
//

#ifndef QUETYPE_H
#define QUETYPE_H

class FullQueue{};
class EmptyQueue{};

template <class t>
class quetype {
private:
    int front;
    int rear;
    int maxQue;
    t* item;
public:
    quetype();
    quetype(int);
    ~quetype();
    void makeempty();
    bool isempty();
    bool isfull();
    void enque(t);
    void deque(t &);

};


#endif //QUETYPE_H
