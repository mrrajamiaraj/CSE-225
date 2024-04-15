#include "array.h"
#include "array.cpp"
#include <iostream>
using namespace std;
int main(){
    int a,h;
    cout<<"Enter array size";
    cin>>a;

    arr q;
    arr b(5);
    b.allocate(a);
    
    for(int i=0;i<a;i++){
        cin>>h;
        b.setvalue(i,h);
    }
    for(int i=0;i<a;i++){
        cout<<b.getvalue(i);
    }
    
    
    

}