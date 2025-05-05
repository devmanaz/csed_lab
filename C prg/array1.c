#include<stdio.h>
void main()
{
    int a[100],i;
    printf("Enter the values");
    for(i=0;i<5;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}