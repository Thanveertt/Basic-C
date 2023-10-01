#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
          scanf("%d",&a[i]);
    for(i=0;i<n;i++)
          sum=sum+a[i]; 
    printf("Sum of the array = %d\n",sum);
}
