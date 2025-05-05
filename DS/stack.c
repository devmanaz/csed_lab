#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
int data;
struct node *link;
};

struct node * head =NULL;

void push();
void display();
void pop();

void main()
{

int choice;

do{

	printf("\t\tMeu\n[1]Push\n[2]Pop\n[3]Peek\n[4]Display\n\nEnter Choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case (1):
		{
		 	push();
			break;
		}		
			

		case (2):
		{
			pop();
			break;
		}
		
		


		case (4):
		{
			display();
		}

	}

}while(choice!=5);//doWhile bracket

}//main bracket



void push()
{
	int data;

	struct node *p=(struct node*)malloc(sizeof(struct node));

	printf("Enter The Data : ");
	scanf("%d",&data);
	
	p->data=data;
	p->link=NULL;

	if(head==NULL)
	{
		head=p;
	}

	else if (head!=NULL)
	{
		p->link=head;
		head=p;
	}

}

void display()
{

	if(head==NULL)
	{
		printf("The Stack Is Empty");
	}

	else if (head!=NULL)
	{
	 	struct node * temp=head;
	 	printf("The Stack Is : ");
	 
	 	while(temp!=NULL)
	 	{
	 	printf("%d\t",temp->data);
	 	temp=temp->link;
	 	}
	}
	
}

void pop()
{

	if(head==NULL)
	{
		printf("Stack is Empty");
	}

	else
	{
		printf("Element Deleted = %d",head->data);
		struct node * del=head;
		head=head->link;
		free(del);
	
	}

}




