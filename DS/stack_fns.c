


#include<stdio.h>
void push(int t,int n,int s[],int item)
{
printf("Enter The Element To BE Inserted : ");
		scanf("%d",&item);
		if(t<n-1)
		{
		t=t+1;
		s[t]=item;
		}
		else
		{
		printf("Stack Full");
		}

}

void pop(int t)
{
if(t>-1)
{
t=t-1;
}
else
{
printf("Stack is Empty");
}
}

void display(int s[],int i,int t)
{
printf("\nThe ELements Are : ");
	for(i=0;i<=t;i++)
	{
	printf("%d\t",s[i]);
	}
}

void main()
{
int s[50],t=-1,n=50,ch,item,i;

//printf("Enter Limit Of The ARRAY : ");
//scanf("%d",&n);



//push
while(1)
{
	printf("\nEnter Choice\n1] PUSH\n2] POP\n3]Display\n4]Exit\n");
	printf("Enter Choice : ");
	scanf("%d",&ch);

	if(ch==1)
	{	
	push(t,n,s,item);
	t=t+1;	
	}

//pop
	if(ch==2)
	{
	pop(t);
	t=t-1;
	printf("Element Dequeued ");
	}
	
	if(ch==3)
	{
	display(s,i,t);
	}
	
	if(ch==4)
	{
	break;
	}
}
}


