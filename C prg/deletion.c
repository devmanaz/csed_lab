#include<stdio.h>
void main()
{
int a[20],n,i,s,j;
printf("Enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the element to be deleted");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s){
for(j=i;j<n;j++){
a[j]=a[j+1];
n--;
}
i--;
}
}
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
}