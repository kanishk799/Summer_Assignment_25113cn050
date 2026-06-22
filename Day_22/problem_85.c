#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j = 0, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    if(strcmp(str, rev) == 0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}