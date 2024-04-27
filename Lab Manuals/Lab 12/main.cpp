#include <iostream>
#include <cmath>
using namespace std;

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}



int sumofdigits(int x) {
    if (x == 0)
        return 0;
    else
        return x + sumofdigits(x - 1);
}

int findmin(int a[], int size) {
    int min = a[0];
    for (int i = 0; i < size; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}



int main() {

    cout << "fibonacci: " << fib(10) << endl;
    
    cout << "sum of the digits: " << sumofdigits(10) << endl;

    int a[10] = {10, 20, 30, 40, 5, 6, 7, 8, 90, 10};
    cout << "mini number: " << findmin(a, 10) << endl;
    

    return 0;
}