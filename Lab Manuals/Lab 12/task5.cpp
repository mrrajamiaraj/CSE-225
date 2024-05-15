#include <iostream>
using namespace std;
int decimal_to_binary(int n)
{
    if(n==0){
        return 0;
    }
    else{
        int i = n%2;
        decimal_to_binary(n/2);
        cout<<i;
        return 0;

    }
}
int main()
{
    decimal_to_binary(10);
}