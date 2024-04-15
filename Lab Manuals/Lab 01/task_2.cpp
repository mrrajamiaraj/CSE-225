/*Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
the user and then print the strings. Finally de-allocate the array using the delete operator.*/

#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter row size";
    cin>>a;
    cout<<"Enter colom size";
    cin>>b;

    int **array = new int *[a];
    for(int i =0;i<a;i++){
        array[i]= new int[b];
    }
    cout<<"Enter array elements";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           cin>>array[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           cout<<array[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<a;i++){
        delete[] array[i];
    }
    delete[] array;


}