#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, total, missing;

    printf("Enter number of elements (n-1): ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n + 1) * (n + 2) / 2;
    missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}