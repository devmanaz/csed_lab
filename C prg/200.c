#include <stdio.h>
int main()
{
    int a[10][10],r,c,i,j,x=0,y=0;
    printf("Enter the no of rows\n");
    scanf("%d",&r);
    printf("Enter the no of columns\n");
    scanf("%d",&c);
    printf("Enter the elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<r;i++)
    {
        int s=0;
        for(j=0;j<c;j++)
        {
         s=s+a[i][j];
        }
        printf("Sum of row%d is %d\n",i+1,s);
    }
    for(i=0;i<c;i++)
    {
        int s=0;
        for(j=0;j<r;j++)
        {
         s=s+a[j][i];
        }
        printf("Sum of column%d is %d\n",j+1,s);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(x<a[i][j])
            {
                x=a[i][j];
            }
        }
    }
    printf("Largest is %d",x);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          if (a[i][j] > y && a[i][j] < x)
           {
                y = a[i][j];
        }
    }
    printf("second largest is %d",y);
    return 0;
}
}
