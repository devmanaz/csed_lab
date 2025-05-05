#include <stdio.h>
#include <math.h>
void main()
{
int n,ch,i,c=0,dig,sum=0;
do
{
printf("\n\t\tMENU");
printf("\n\n1.Check if the number is prime number\n2.Check if the number is Armstrong Number\n3.Exit the Program");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch (ch)
{
case 1:
{
printf("\nChecking if its a prime number");
printf("\nEnter the number to be checked:");
scanf("%d",&n);
for (i=2;i<=n/2;i++)
{
if(n%i==0)
c=1;
}
if (c==1)
{
printf("\nIt is not a prime number");
break;
}
else
{
printf("\nIt is a prime number");
break;
}
}
case 2:
{
printf("\nChecking if its an Armstrong Number");
printf("\nEnter the number to be checked:");
scanf("%d",&n);
c=0;
i=n;
while (i>0)
{
c++;
i=i/10;
}
i=n;
while(i>0)
{
dig=i%10;
sum=sum+pow(dig,c);
i=i/10;
}
if (sum==n)
printf("\n%d is an Armstrong Number",n);
else
printf("\n%d is not an Armstrong Number",n);
break;
}
case 3:
break;
default:
printf("\nInvalid Choice\n");
break;
}
}
while(ch==1||ch==2);
}
