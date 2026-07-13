#include <stdio.h>

int main() {
    char name[30];
    int seats;

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Number of Seats: ");
    scanf("%d",&seats);

    printf("\nTicket Booked Successfully");
    printf("\nName : %s",name);
    printf("\nSeats : %d",seats);

    return 0;
}