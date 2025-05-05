#include<stdio.h>
void main()
{
int a[50],n,i,ele,pos,j;
printf("Enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter the elements");
scanf("%d",&a[i]);
}
printf("Enter the elements and position");
scanf("%d%d",&ele,&pos);
for(i=0;i<n;i++){
if(i==pos-1){
for(j=n-1;j>=pos-1;j--){
a[j+1]=a[j];
}
a[j+1]=ele;
n++;
}
}
printf("array after insertion");
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}