#include <stdio.h>

int main() {
    char name[30];
    float balance;

    printf("Enter Account Holder Name: ");
    scanf("%s",name);

    printf("Enter Balance: ");
    scanf("%f",&balance);

    printf("\nAccount Holder : %s",name);
    printf("\nBalance : %.2f",balance);

    return 0;
}