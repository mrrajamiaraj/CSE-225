#include"unsorted.cpp"
#include"unsorted.h"
#include<iostream>
using namespace std;
void print(unsorted<int> a){
    int value;
    int l = a.length;
    for(int i=0;i<l;i++){
      a.getnext(value);
      cout<<value<<" ";
   }
}

void check(unsorted<int> a,int t){
    int c = a.retrive(t);
   if(c==1){
    cout<<"item is found";
   }
   else
   cout<<"item is not found";
}

void full(bool b){
    if(b){
        cout<<"list is full";
    }
    else{
        cout<<"list is not full";
    }
}


int main(){
   unsorted<int> a;

   a.insert(5);
   a.insert(7);
   a.insert(6);
   a.insert(9);
   
   int l = a.length;


   cout<<"list is : ";
   print(a);
   cout<<endl;

   cout<<"length is :"<<l<<endl;

   a.insert(1);
   a.resetlist();

   cout<<"list is : ";
   print(a);
   cout<<endl;

   check(a,4);
   cout<<endl;
   check(a,5);
   cout<<endl;
   check(a,9);
   cout<<endl;
   check(a,10);

   cout<<endl;
   full(a.isfull());

   a.delet(5);
   cout<<endl;
   full(a.isfull());

   



   
}