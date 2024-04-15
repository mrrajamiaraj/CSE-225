#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
class arr{
    public :
    int *array;
    int size;
    arr();
    arr(int);
    ~arr();
    int getvalue(int);
    void setvalue(int,int);
    void allocate (int);


};

#endif