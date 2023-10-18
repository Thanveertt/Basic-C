#include <stdio.h>

struct Book 
{
    char name[100];
    int PageNumber;
    float price;
};

int main() 
{
    struct Book b1;
    struct Book b2;

    printf("Enter details of first Book:\n");
    scanf("%s %d %f", b1.name, &b1.PageNumber, &b1.price);

    printf("Enter details of second Book:\n");
    scanf("%s %d %f", b2.name, &b2.PageNumber, &b2.price);

    printf("First book details:\n");
    printf("Name: %s\n", b1.name);
    printf("Page Number: %d\n", b1.PageNumber);
    printf("Price: %.2f\n", b1.price);

    printf("Second book details:\n");
    printf("Name: %s\n", b2.name);
    printf("Page Number: %d\n", b2.PageNumber);
    printf("Price: %.2f\n", b2.price);

    return 0;
}
