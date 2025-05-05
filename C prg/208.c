#include<stdio.h>
int sum(int);
void main()
{
    int n,f;
    printf("Enter the number\n");
    scanf("%d",&n);
    f=sum(n);
    printf("The sum is %d",f);
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return(n+sum(n-1));
    }
    
}