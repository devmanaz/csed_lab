#include<stdio.h>
void main()
{
    int n,i,sum=0,rem;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/=10)
    {
        rem=i%10;
        sum=sum+rem;
    }
    printf("sum of digits is %d",sum);
}