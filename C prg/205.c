#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b,s;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("sum is %d",s);
}