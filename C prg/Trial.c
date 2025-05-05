#include<stdio.h>
void main()
{
    int n,i;
    union book
    {
        int book_id;
        char author[10];
        char title[10];
        int copy;
    }b;
    printf("Enter book id");
    scanf("%d",&b.book_id);
    printf("%d",b.book_id);
     printf("Enter copy");
    scanf("%d",&b.copy);
    printf("%d",b.copy);      
}

