#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d\t",&j);
        }
        printf("\n");
    }
    return 0;
}