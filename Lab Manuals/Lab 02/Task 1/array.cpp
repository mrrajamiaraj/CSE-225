#include "array.h"
#include <iostream>
using namespace std;
arr::arr(){
   array = NULL;
   size =0;
}
arr::arr(int size){
    array = new int [size];
}
arr::~arr(){
    delete[] array;
}
void arr::setvalue(int index, int value){
      array[index]=value;
}
int arr::getvalue(int index){
    return array[index];
}

