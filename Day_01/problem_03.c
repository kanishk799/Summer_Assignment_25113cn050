#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Use 'unsigned long long' for large results

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorials are not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; // fact = fact * i
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}