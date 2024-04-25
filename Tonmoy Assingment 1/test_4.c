#include  <stdio.h> 

int main() {
    int n = 5;

    // Upper half of the diamond
    for (int i = 0; i  <  n; i++) {
        // Printing spaces
        for (int j = n - 1; j  >  i; j--) {
            printf(" ");
        }
        // Printing stars
        for (int k = 0; k  <  i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = 1; i  <  n; i++) {
        // Printing spaces
        for (int j = 0; j  <  i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = n - 1; k  >= i; k--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}