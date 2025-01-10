
#include <stdio.h>

long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    long int fact;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(n);
        printf("Factorial of %d is %ld\n", n, fact);
    }

    return 0;
}
