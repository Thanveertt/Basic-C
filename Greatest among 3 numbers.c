#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter Value of x=");
    scanf("%d",&x);
    printf("\nEnter Value of y=");
    scanf("%d",&y);
    printf("\nEnter Value of z=");
	  scanf("%d",&z);
	  printf("\n");
    if(x>y)
    {
        if(x>z) 
        printf("Greatest number is x=%d",x);
    }
    else if(y>z)
    printf("Greatest number is y=%d",y);
    else
    printf("Greatest number is z=%d",z);
}
