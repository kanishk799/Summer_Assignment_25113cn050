#include ,stdio.h>
int main() {
    int n, d,sum=0;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    while (n > 0) {
        d = n % 10;
        sum=sum+d;
        n=n/10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}