#include <stdio.h>
#include <math.h>
int main()
{
    int ch,n,c=0,i,count=0,sum=0;
    do
    {
        printf("\t\tMENU\n1.Prime number\n2.Armstrong\n3.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("Enter the number\n");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                    if(n%i==0)
                    {
                        c++;
                    }
                }
                if(c==2)
                {
                    printf("Prime number.\n");
                }
                else
                {
                    printf("Not a prime number.\n");
                }
                    break;
            }
            case 2:
            {
               printf("Enter the number\n");
               scanf("%d",&n);
               for(i=n;i>0;i=i/10)
               {
                   count++;
               }
               for(i=n;i>0;i=i/10)
               {
                   dig=n%10;
                   sum=sum+pow(dig,count);
               }
               if(sum==n)
               {
                   printf("Armstrong number\n");
               }
               else
               {
                  printf("Not an armstrong number\n"); 
               }
               
            }
            case 3:
            {
                break;
            }
            default:
            {
                printf("Invalid choice\n");
            }
        }
    }while(ch==1||ch==2);
    return 0;
}