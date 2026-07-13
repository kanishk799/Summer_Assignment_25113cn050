#include <stdio.h>

int main() {
    int secret = 25, guess;

    printf("Guess the number (1-50): ");
    scanf("%d", &guess);

    if(guess == secret)
        printf("Correct!");
    else if(guess > secret)
        printf("Too High!");
    else
        printf("Too Low!");

    return 0;
}