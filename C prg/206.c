#include<stdio.h>
int fact(int);
void main()
{
    int n,f;
    printf("Enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial is %d",f);
}
int fact(int n)
{
    if((n==0)||(n==1))
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));
    }
}