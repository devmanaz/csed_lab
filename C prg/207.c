#include<stdio.h>
int febi(int);
void main()
{
    int n,f,i;
    printf("Enter the number");
    scanf("%d",&n);
    f=febi(n);
    for(i=1;i<=n;i++)
    {
        printf("%d",febi(i));
    }
    
}
int febi(int n)
{
    if((n==0)||(n==1))
    {
        return n;
    }
    else
    {
        return(febi(n-1)+febi(n-2));
    }
}