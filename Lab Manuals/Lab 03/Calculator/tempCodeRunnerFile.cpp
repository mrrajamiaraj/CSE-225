#include"cal.cpp"
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your first number"<<endl;
    int a;
    cin>> a;
    cout<<"Enter your second number"<<endl;
    int b;
    cin>> b;
    cout<<"Enter an operation"<<endl;
    char h;
    cin>>h;
    
    o<int> p(a,b);

    switch(h){
        case '+':
        return p.add();
        case '-':
        return p.subs();
        case '*':
        return p.multi();
        case '/':
        if(b==0){
            cout<<"error"<<endl;
        }
        else{
        return p.devide();
        }
        case '%':
        if(b==0){
            cout<<"error"<<endl;
        }
        else{
        return p.persentage();
        }
    }




}
