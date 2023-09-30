#include <stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the Limit:");
    scanf("%d",&n);
    read:
    {
        printf(" %d",count);
        count=count+2;
        if(count<=n)
        goto read;
    }
}
