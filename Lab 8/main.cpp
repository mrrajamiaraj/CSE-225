#include <iostream>
using namespace std;
#include "stacktype.cpp"

void checkempty(stacktype<int> h) {
    bool b;

    b = h.isempty();
    if(b) {
        cout<<"stack is empty"<<endl;
    }
    else {
        cout<<"stack is  not empty"<<endl;
    }

}void checkfull(stacktype<int> h) {
    bool b;

    b = h.isfull();
    if(b) {
        cout<<"stack is  full"<<endl;
    }
    else {
        cout<<"stack is not full"<<endl;
    }

}

void printlist(stacktype<int> h) {
    stacktype<int> temp;
    while(!h.isempty()) {
        temp.push(h.Top());
        h.pop();
    }
    while(!temp.isempty()) {
        cout<<temp.Top();
        h.push(temp.Top());
        temp.pop();

    }
}
int main() {
    stacktype<int> stack;
    checkempty(stack);
    stack.push(5);
    stack.push(7);
    stack.push(4);
    stack.push(2);
    checkempty(stack);
    checkfull(stack);
    printlist(stack);
    cout<<"hi1"<<endl;
    stack.push(3);
    cout<<"hi2"<<endl;
    printlist(stack);
    cout<<"hi3"<<endl;
    checkfull(stack);
    stack.pop();
    stack.pop();
    cout<<stack.Top();


    stacktype<char> parentiss;
    string str;
    cin>>str;
    for(char c:str) {
        char array_item = c;

        if(array_item=='(')
            parentiss.push(array_item);
        try {
            if(array_item==')')
                parentiss.pop();
        }
        catch (empystack) {
            cout<<"umbalance";
        }
    }
    if(parentiss.isempty()) {
        cout<<"balance";
    }
    else
        cout<<"Not balanced";

}
