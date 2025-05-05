#include <stdio.h>
#include <stdlib.h>
void sort(int *queue, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(queue[i]>queue[j])
            {
                int temp=queue[i];
                queue[i]=queue[j];
                queue[j]=temp;
            }
        }
    }
}
void main()
{
    int max,head,queue[100],sum=0,n;
    printf("Enter the number of requests: ");
    scanf("%d",&n);
    printf("Enter the value of head");
    scanf("%d",&head);
    printf("Enter the max value of disk: ");
    scanf("%d",&max);
    printf("Enter the requests: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&queue[i]);
    }
    queue[n++]=head;
    sort(queue,n);
    printf("Enter the direction of head movement left=0,right=1: ");
    int dir;
    scanf("%d",&dir);
    if(dir==1)
    {
        for(int i=0;i<n;i++)
        {
            if(queue[i]=head)
            {
                sum+=abs(queue[i]-max);
            }
            sum+=abs(max-queue[0]);
        }
    }
    else
    {
        sum=head+queue[n-1];
    }
    printf("The total head movement is %d\n",sum);
}
