#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the value for x&y");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    {
        printf("The point is on 1st quadrent");
    }
    else if(x<0&&y>0)
    {
        printf("The point is on 2nd quadrent");
    }
    else if(x>0&&y<0)
    {
        printf("The point is on 3rd quadrent");
    }
    else if(x<0&&y<0)
    {
        printf("The point is on 4th quadrent");
    }
    else
    {
        printf("the point is on origin");
    }
}