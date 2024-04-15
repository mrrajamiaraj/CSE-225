/*Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter array size";
    cin>>a;

    int*array = new int[a];
    cout<<"Enter array elements";
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
    for(int i=0;i<a;i++){
        cout<<array[i];
    }
    delete []array;


}