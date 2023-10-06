#include<stdio.h>
int sum();
int main() 
{
   int r;
   r=sum();
   printf("sum=%d",r);
}
 
int sum() 
{
   int a,b,c;
    printf("Enter the two numbers:");
   scanf("%d %d",&a,&b);
   c=a+b;
   return (c);
}
