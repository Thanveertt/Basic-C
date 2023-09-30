#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Value of a=");
	scanf("%d",&a);
	printf("\nEnter Value of b=");
	scanf("%d",&b);
    printf("Before swapping a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
	printf("\nAfter Swapping: a=%d b=%d",a,b);
}
