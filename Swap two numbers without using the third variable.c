#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter Value of a=");
	scanf("%d",&a);
	printf("\nEnter Value of b=");
	scanf("%d",&b);
    printf("Before swapping a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
	printf("\nAfter Swapping: a=%d b=%d",a,b);
}
