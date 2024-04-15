/*Using the new operator, allocate a two dimensional integer array. The number of rows and columns are going
to be provided by the user as input. However, in this task, all of the rows are not the same size (the array is uneven).
The user will specify how many elements the individual rows will have. Assign values to the array elements by taking
user inputs and then print the values. Finally de-allocate the array using the delete operator.*/

#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter row size";
    cin>>a;
    int colom[a];
    
    

    int **array = new int *[a];
    for(int i =0;i<a;i++){
        cout<<"Enter colom size of row"<<i;
        cin>>b;
        array[i]= new int[b];
        colom[i]=b;
        
    }
    cout<<"Enter array elements";
    for(int i=0;i<a;i++){
        for(int j=0;j<colom[i];j++){
           cin>>array[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<colom[i];j++){
           cout<<array[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<a;i++){
        delete[] array[i];
    }
    delete[] array;


}