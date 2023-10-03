#include<stdio.h>
int main()
{
    int a[100],n,i,l;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    printf("largest number is:%d",l);
    
}
