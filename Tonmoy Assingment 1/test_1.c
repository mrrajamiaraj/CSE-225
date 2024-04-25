//id = 2321530043
#include <stdio.h>

int seriesSum(int n) {
    int total = 0;
    int i = 5; // Starting value for the series

    while (i <= n) {
        total += i * i;
        i += 3; // Increment by 3 for the next term in the series
    }
    return total;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = seriesSum(n);
    printf("Sum of the series up to n^2 is: %d\n", result);

    return 0;
}
