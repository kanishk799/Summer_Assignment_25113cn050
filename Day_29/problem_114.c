#include <stdio.h>

int main() {
    int a[20],n,i,sum=0,ch;

    printf("Enter Size: ");
    scanf("%d",&n);

    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("1.Display\n2.Sum\n");
    scanf("%d",&ch);

    if(ch==1)
    {
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    else if(ch==2)
    {
        for(i=0;i<n;i++)
            sum+=a[i];
        printf("Sum=%d",sum);
    }

    return 0;
}