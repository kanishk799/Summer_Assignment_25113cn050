#include <stdio.h>

int main() {
    int id;
    char name[30];

    printf("Enter Book ID: ");
    scanf("%d",&id);

    printf("Enter Book Name: ");
    scanf("%s",name);

    printf("\nBook ID : %d",id);
    printf("\nBook Name : %s",name);

    return 0;
}