#include "complex.cpp"
#include<iostream>
using namespace std;
int main(){
    complex x1(5,2),x2(5,3);
    complex x3 = x1+x2;
    x3.print();
    cout<<endl;

    complex x4 = x1*x2;
    x4.print();
    
    cout<<(x1!=x2)<<endl;


}
