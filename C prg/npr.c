#include<stdio.h>
void main()
{
    int n,r,i,f=1,g=1,h;
    printf("Enter the value for n and r");
    scanf("%d%d",&n,&r);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    for(i=(n-r);i>=1;i--)
    {
        g=g*i;
    }
    h=(f/g);
    printf("The value for npr is %d",h);
}