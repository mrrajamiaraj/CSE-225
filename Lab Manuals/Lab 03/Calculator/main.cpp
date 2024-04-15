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
        cout<< p.add();
        break;
        case '-':
        cout<< p.subs();
        break;
        case '*':
        cout<< p.multi();
        break;
        case '/':
        if(b==0){
            cout<<"error"<<endl;
        }
        else{
        cout<< p.devide();
        break;
        }
        case '%':
        if(b==0){
            cout<<"error"<<endl;
        }
        else{
        cout<< p.persentage();
        }
        break;
    }




}
