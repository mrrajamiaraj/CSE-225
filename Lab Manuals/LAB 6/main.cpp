//
// Created by rajam on 5/1/2024.
//
#include "unsortedType.cpp"
#include<iostream>
using namespace std;
int main(){
    unsortedType<int> list1,list2,merged;
    int a,b,c,d;

    cout<<"Enter hoe many elements you want to enter in list 1";
    cin>>a;
    cout<<"Enter the elements";
    for(int i=0;i<a;i++){
       cin>>c;
       list1.InsertItem(c);
    }

    cout<<"Enter hoe many elements you want to enter in list 2";
    cin>>b;
    cout<<"Enter the elements";
    for(int i=0;i<b;i++){
       cin>>d;
       list1.InsertItem(d);
    }

    int value1,value2;
    int index1= list1.LengthIs();
    int index2= list2.LengthIs();
    list1.GetNextItem(value1);
    list2.GetNextItem(value2);

    while(index1>0&&index2>0){
        if(value1>value2){
            merged.InsertItem(value1);
            index1--;
            if(index1>0){
                list1.GetNextItem(value1);
            }
        }
        else if(value2>value1){
            merged.InsertItem(value2);
            index2--;
            if(index2>0){
                list2.GetNextItem(value2);
            }
        }
        else{
            merged.GetNextItem(value1);
            merged.GetNextItem(value2);
            index1--;
            index2--;
            if(index1>0){
                list1.GetNextItem(value1);
            }
            if(index2>0){
                list2.GetNextItem(value2);
            }
        }
    }

    while(index1>0){
    merged.InsertItem(value1);
    index1--;
    if(index1>0){
                list1.GetNextItem(value1);
            }
    }

    while(index2>0){
    merged.InsertItem(value2);
    index2--;
    if(index2>0){
                list2.GetNextItem(value2);
            }
    }

    int value;
    int line = merged.LengthIs()-1;
    while(line>=0){
        merged.GetNextItem(value);
        cout<<value;
        line--;
    }

}

