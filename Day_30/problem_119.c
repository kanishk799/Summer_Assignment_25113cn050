#include <stdio.h>

int main() {
    char name[3][30];
    int salary[3],i;

    for(i=0;i<3;i++)
    {
        printf("Enter Name and Salary: ");
        scanf("%s%d",name[i],&salary[i]);
    }

    printf("\nEmployee Details\n");

    for(i=0;i<3;i++)
        printf("%s %d\n",name[i],salary[i]);

    return 0;
}