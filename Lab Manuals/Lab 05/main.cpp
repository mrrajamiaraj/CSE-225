#include"sorted.cpp"
#include<iostream>

using namespace std;

int checklength(sorted<int> a){
    int i = a.lengthis();
    return i;
}

void list(sorted<int> a){
    int item;
     int size = a.lengthis();
     for(int i=0;i<size;i++){
        a.getnext(item);
        cout<<item<<" ";
     }
     cout<<endl;
}

void find(sorted<int> a, int value){
    bool b;
    a.retrive(value,b);
    if(b){
        cout<<"item is found";
    }
    else{
        cout<<"item is not found";
    }
    cout<<endl;

}



int main(){
    sorted<int> a;

  

    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(2);
    a.insert(1);
    

    cout<<checklength(a);
    cout<<endl;
    list(a);
    
    //find(a,5);

    int r = 5;
    bool found;
    a.retrive(r,found);
    if(found) {
        cout << "Item is found " << endl;
    }
    else {
        cout << "Item is not found" << endl;
    }




}
