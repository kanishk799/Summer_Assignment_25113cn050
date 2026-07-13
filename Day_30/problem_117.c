#include <stdio.h>

int main() {
    char name[5][30];
    int marks[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter Name and Marks: ");
        scanf("%s%d",name[i],&marks[i]);
    }

    printf("\nStudent Records\n");

    for(i=0;i<5;i++)
        printf("%s %d\n",name[i],marks[i]);

    return 0;
}