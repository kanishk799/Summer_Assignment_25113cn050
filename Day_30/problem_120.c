#include <stdio.h>

void display(char name[], int marks)
{
    printf("\nStudent Name : %s",name);
    printf("\nMarks : %d",marks);
}

int main()
{
    char name[30];
    int marks;

    printf("Enter Student Name: ");
    scanf("%s",name);

    printf("Enter Marks: ");
    scanf("%d",&marks);

    display(name,marks);

    return 0;
}