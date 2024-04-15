#include "array.cpp"
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter your array size";
    cin>>a;
    arr<double> hello(a);

cout<<"Enter array numbers"<<endl;
    for(int i=0;i<a;i++){
        cin>>b;
        hello.setvalue(i,b);
    }

    for(int i=0;i<a;i++){
        cout<<hello.getvalue(i);
    }
}