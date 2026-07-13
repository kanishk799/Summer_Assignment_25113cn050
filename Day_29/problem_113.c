#include <stdio.h>

int main() {
    int ch;
    float a,b;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter Choice: ");
    scanf("%d",&ch);

    printf("Enter Two Numbers: ");
    scanf("%f%f",&a,&b);

    switch(ch)
    {
        case 1: printf("Answer = %.2f",a+b); break;
        case 2: printf("Answer = %.2f",a-b); break;
        case 3: printf("Answer = %.2f",a*b); break;
        case 4: printf("Answer = %.2f",a/b); break;
        default: printf("Invalid Choice");
    }

    return 0;
}