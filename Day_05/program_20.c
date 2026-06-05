#include <stdio.h>

int main() {
    long long n;
    int largestFactor = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largestFactor = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d\n", largestFactor);

    return 0;
}