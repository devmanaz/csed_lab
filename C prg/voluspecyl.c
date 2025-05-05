#include<math.h>
#include<stdio.h>
void main()
{
    float r,h,A=0,B=0,pi=3.14;
    printf("Enter the value for r and h ");
    scanf("%f%f",&r,&h);
    A=(4/3)*pi*pow(r,3);
    B=pi*pow(r,2)*h;
    printf("Volume of cylinder IS %f & sphere is %f",A,B);
}