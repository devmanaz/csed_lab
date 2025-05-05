#include<stdio.h>
void sum(int,int);
void main()
{
    int a,b;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int a,int b)
{
    int sum=0;
    sum=a+b;
    printf("Sum of the digits is %d",sum);
}