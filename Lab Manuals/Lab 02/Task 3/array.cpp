#include "array.h"
#include <iostream>
using namespace std;
arr::arr(){
    row =0;
    colom =0;
    array = NULL;
}
arr::arr(int row,int colom){
    array = new int *[row];
    for(int i=0;i<row;i++){
        array[i] = new int[colom];
    }
}
arr::~arr(){
    int i =0;
    while(i<this->row){
    delete[] array[i];
    i++;
    }
    delete[] array;
}
void arr::setvalue(int row,int colom,int value){
    array[row][colom]=value;
}
int arr::getvalue(int row,int colom){
    return array[row][colom];
}


