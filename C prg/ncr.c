#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,i,f=1,g=1,h=1,w;
    printf("enter the value for n & r");
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=1;i<=r;i++)
    {
        g=g*i;
    }
    for(i=1;i<=(n-r);i++)
    {
        h=h*i;
    }
    w=f/(g*h);
    printf("The ncr is %d",w);
}