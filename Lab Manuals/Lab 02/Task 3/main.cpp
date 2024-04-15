/* Task 2:
 Modify the header and the source files. Add a member function "void allocate(int s)" which allows you to change the
 size of the array. Make sure that memory is not leaked.

 Note:
 In the header file, we are initializing new array by calling the destructor whenever "allocate" function will be
 called. This makes sure that memory is not being leaked.*/
 #include "array.cpp"
 #include <iostream>
 using namespace std;
 int main(){
    int row,colom;
    cout<<"Enter row size"<<endl;
    cin>>row;
    cout<<"Enter colom size"<<endl;
    cin>>colom;

    arr d(row,colom);
    int value;
    cout<<"Enter your valeus"<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<colom;j++){
            cin>>value;
           d.setvalue(i,j,value);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colom;j++){
            cout<<d.getvalue(i,j);
            
        }
        cout<<endl;
    }



 }

