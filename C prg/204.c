#include<stdio.h>
int sum();
void main()
{
    int s;
    s=sum();
    printf("sum is %d",s);
}
int sum()
{
    int a,b,s;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    s=a+b;
   return s; 
}