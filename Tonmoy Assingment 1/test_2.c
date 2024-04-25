//id no = 2321530043
#include <stdio.h>

double seriesSum(int n) {
    double total = 0;
    double factorial = 1;
    int i;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            total -= 1.0 / factorial;
        } else {
            total += 1.0 / factorial;
        }
        factorial *= (i + 1); // Update factorial for the next term
    }

    return total;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = seriesSum(n);
    printf("Sum of the series up to the nth term is: %lf\n", result);

    return 0;
}
