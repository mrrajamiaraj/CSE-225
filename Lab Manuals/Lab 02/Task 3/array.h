#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
class arr{
    public :
    int row;
    int colom;
    int **array;
    arr();
    arr(int,int);
    ~arr();
    void setvalue(int,int,int);
    int getvalue(int,int);


};

#endif