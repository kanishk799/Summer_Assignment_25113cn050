#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int ch;

    printf("Enter String: ");
    scanf("%s",str);

    printf("1.Length\n2.Reverse\n");
    scanf("%d",&ch);

    if(ch==1)
        printf("Length = %d",strlen(str));
    else
    {
        strrev(str);
        printf("Reverse = %s",str);
    }

    return 0;
}