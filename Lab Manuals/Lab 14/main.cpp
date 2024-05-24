#include <iostream>

#include "pqtype.h"
using namespace std;
#include "pqtype.cpp"
#include<iostream>
void checkempty(bool b) {
    if(b) {
        cout<<"empty"<<endl;
    }
    else {
        cout<<"Not Empty"<<endl;
    }
}
int main() {
    PQType<int> pq(15);
    checkempty(pq.IsEmpty());

    cout<<"Enter the items"<<endl;
    int t;

    for(int i=0;i<10;i++) {
        cin>>t;
        pq.Enqueue(t);
    }
    checkempty(pq.IsEmpty());
    int value;
    pq.Dequeue(value);
    cout<<value<<endl;

    pq.Dequeue(value);
    cout<<value<<endl;
}
