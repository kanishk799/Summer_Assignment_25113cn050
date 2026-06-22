#include <stdio.h>

int main() {
    int a[10][10], trans[10][10];
    int n, i, j, flag = 1;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // transpose
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            trans[j][i] = a[i][j];

    // check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != trans[i][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}