#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i=i-1)
    {
        s=s+i;
    }
    printf("sum is eqal to %d",s);
}