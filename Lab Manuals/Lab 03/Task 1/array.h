#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

template<class T>
class arr{
    public :
    T *array;
    int size;

    arr();
    arr(int);
    ~arr();
    void setvalue(int,T);
    T getvalue(int);
};

#endif