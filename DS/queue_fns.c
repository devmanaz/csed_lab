
#include<stdio.h>

void enqueue(int item,int r,int n,int q[])
{
printf("Enter The Element To BE Inserted : ");
		scanf("%d",&item);
		if(r<n-1) // normal
		{
		r=r+1;
		q[r]=item;
		}
		else
		{
		printf("QUEUE IS FULL");
		}
}

void dequeue(int f,int r)
{
if(f!=r)
{
f=f+1;
}
else
{
printf("Stack is Empty");
}
}

void display(int i,int f,int r,int q[])
{
printf("\nThe ELements Are : ");
		for(i=f+1;i<=r;i++)
		{
		printf("%d\t",q[i]);
		}
}


void main()
{
int q[50],f=-1,r=-1,n,ch,item,i;

printf("Enter Limit Of The ARRAY : ");
scanf("%d",&n);



//push
while(1)
{
	printf("\nEnter Choice\n1] Enqueue \n2] Dequeue \n3]Display\n4]Exit\n");
	printf("\nEnter Choice :");
	scanf("%d",&ch);

	if(ch==1)									
	{				
	enqueue(item,r,n,q);
	r=r+1;			//q[] is automatically gettibg updated.
	}

//pop
	if(ch==2)
	{
	dequeue(f,r);
	f=f+1;
	printf("Element Dequeued\n");
	}
	
	if(ch==3)
	{
	display(i,f,r,q);	
	}
	
	if(ch==4)
	{
	break;
	}
	}
}


