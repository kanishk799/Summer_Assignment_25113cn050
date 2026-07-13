#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n2. 5 + 3 = ?\n");
    printf("1.6  2.8  3.10\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n3. C Language was developed by?\n");
    printf("1.Dennis Ritchie  2.James Gosling  3.Bjarne Stroustrup\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}