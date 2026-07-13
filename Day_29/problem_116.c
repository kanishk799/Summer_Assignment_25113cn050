#include <stdio.h>

int main() {
    char item[30];
    int qty;

    printf("Enter Item Name: ");
    scanf("%s",item);

    printf("Enter Quantity: ");
    scanf("%d",&qty);

    printf("\nItem : %s",item);
    printf("\nQuantity : %d",qty);

    return 0;
}