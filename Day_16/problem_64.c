#include <stdio.h>

int main() {
    int arr[100], temp[100], n, i, j, k = 0;
    int duplicate;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        duplicate = 0;

        for(j = 0; j < k; j++) {
            if(arr[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate) {
            temp[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}