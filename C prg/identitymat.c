#include<stdio.h>
void main()
{
int a[5][5],r,c,b[5][5],i,j,f=0;
printf("enter the dimensions of the matrix:\n");
scanf("%d%d",&r,&c);
if(r==c)
{
printf("enter the elements of the matrix:\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ if(i==j)
b[i][j]=1;
else
b[i][j]=0;
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if (a[i][j]!=b[i][j])
{
f=1;
printf("the matrix is not an identity matrix");
break;
}
}
break;
}
if (f==0) {
printf("the matrix is an identity matrix");
}
else {
printf("matrix is not a square matrix");
}}