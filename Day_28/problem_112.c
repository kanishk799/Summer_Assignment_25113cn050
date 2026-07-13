#include <stdio.h>

int main() {
    char name[30];
    long long phone;

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Phone Number: ");
    scanf("%lld",&phone);

    printf("\nName : %s",name);
    printf("\nPhone : %lld",phone);

    return 0;
}