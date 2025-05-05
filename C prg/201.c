#include<stdio.h>
void sum(int a[100],int n);
void main()
{
    int a[100],n,i;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
}
void sum(int a[100],int n)
{
   int i,sum=0;
   for(i=0;i<n;i++)
   {
    sum=sum+a[i];
   }
   printf("sum is %d",sum);

}