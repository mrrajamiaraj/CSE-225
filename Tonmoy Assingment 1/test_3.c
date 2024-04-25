#include <stdio.h>
//d no = 2321530043

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int m, n;

    // Input values of m and n
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between %d and %d are:\n", m, n);

    // Ensure m is less than n
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }

    // Iterate through each number from m to n
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
