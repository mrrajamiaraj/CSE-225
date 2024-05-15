#include <iostream>
using namespace std;
int factorail(int n){
    if(n==1){
        return 1;
    }
    else if(n ==0){
        return 1;
    }
    else{
        return n*factorail(n-1);
    }
}
int main(){
    factorail(5);
    cout<<factorail(5);
}