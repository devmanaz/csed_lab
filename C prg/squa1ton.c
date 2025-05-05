#include<stdio.h>
void main()
{
    int n,i,f=1,s=0;
    printf("Enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=i*i;
        s=s+f;
    }
    printf("sum of square is %d",s);

}