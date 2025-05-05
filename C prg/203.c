#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,s;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum is %d",s);
}
int sum(int a,int b)
{
    int s;
    s=a+b;
   return s; 
}