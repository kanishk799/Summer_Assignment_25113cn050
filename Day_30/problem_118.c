#include <stdio.h>

int main() {
    char book[3][30];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter Book Name: ");
        scanf("%s",book[i]);
    }

    printf("\nBooks Available:\n");

    for(i=0;i<3;i++)
        printf("%s\n",book[i]);

    return 0;
}
