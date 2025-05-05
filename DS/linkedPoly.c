#include<stdio.h>
#include<stdlib.h>
struct node
{
int coefficient;
int exponent;
struct node* next;
};

struct node *head1=NULL;
struct node *head2=NULL;
struct node *head3=NULL;

void createPoly(struct node** head);
void addPoly();
void displayPoly(struct node **head);

int main()
{
	int choice;
	do
	{
	printf("\nMENU\n1]Add\n2]Display\n[3]Exit\n\nEnter choice : ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
		{
		
			printf("\n_____________________________________\n");			 	
			printf("Enter Polynomial A Details");
			printf("\n_____________________________________\n");	
			createPoly(&head1);
			printf("\n_____________________________________\n");	
			printf("Enter Polynomial B Details");
			printf("\n_____________________________________\n");	
			createPoly(&head2);
			printf("\n_____________________________________\n");	
			printf("\nPolynomial A :");
			
			displayPoly(&head1);
			printf("\n_____________________________________\n");	
			printf("\nPolynomial B :");
			displayPoly(&head2);
			printf("\n_____________________________________\n");
			break;

		}
		
		case 2:
		{
			addPoly();
			printf("\nPolynomial c :");
			displayPoly(&head3);
			head1=NULL;
			head2=NULL;
			head3=NULL;
			break;
			
		}
		case 3:
		{
		return 0;
		}
	}
	}while(choice!=3);

}

void createPoly(struct node** head)
{

	int coefficient;
	int exponent;
	int n;

	printf("\nEnter the number of terms : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("\nenter coefficient: ");
		scanf("%d",&coefficient);
		printf("enter exponent: ");
		scanf("%d",&exponent);
		
		struct node * p = (struct node*) malloc(sizeof(struct node));
		p->exponent=exponent;
		p->coefficient=coefficient;
		p->next=NULL;
		
		if(*head==NULL)
		{
			*head=p;
		}
		
		else
		{
			
			struct node *temp=*head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=p;
			
		}
		
	}	
	
}

void addPoly()
{
struct node *p=head1;
struct node *q=head2;
int exponent;
int coefficient;

	while(q!=NULL && p!=NULL)
	{
		if(p->exponent==q->exponent)
		{
			exponent=p->exponent;
			coefficient=p->coefficient+q->coefficient;
			p=p->next;
			q=q->next;
		}
		else if(p->exponent > q->exponent)
		{
			exponent=p->exponent;
			coefficient=p->coefficient;
			p=p->next;
		}
		else
		{
			exponent=q->exponent;
			coefficient=q->coefficient;
			q=q->next;
		}
		
		
		struct node* r=(struct node*)malloc(sizeof(struct node));
		r->exponent=exponent;
		r->coefficient=coefficient;
		r->next=NULL;
		
		if(head3==NULL)
		{
			head3=r;
		}
		else
		{
			struct node *temp=head3;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=r;	
		}
	}
	
	
	if(q==NULL)
	{
			while(p!=NULL)
			{
			exponent=p->exponent;
			coefficient=p->coefficient;
			p=p->next;
			
			struct node* r=(struct node*)malloc(sizeof(struct node));
			r->exponent=exponent;
			r->coefficient=coefficient;
			r->next=NULL;
		
			if(head3==NULL)
			{
				head3=r;
			}
			else
			{
				struct node *temp=head3;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=r;	
			}
			
			
			}
	
	}
	
	
	
	if(p==NULL)
	{
			while(q!=NULL)
			{
			exponent=q->exponent;
			coefficient=q->coefficient;
			q=q->next;
			
			struct node* r=(struct node*)malloc(sizeof(struct node));
			r->exponent=exponent;
			r->coefficient=coefficient;
			r->next=NULL;
		
			if(head3==NULL)
			{
				head3=r;
			}
			else
			{
				struct node *temp=head3;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=r;	
			}
			
			
			}
	
	}
	
	
}


void displayPoly(struct node **head)
{
	if(*head==NULL)
	{
		printf("polynomial is empty\n");
	}
	else
	{
		struct node* temp=*head;
		while(temp!=NULL)
		{
			if( temp->next==NULL)
			{
			printf("%dx^%d\n",temp->coefficient,temp->exponent);
			}
			else
			{
			printf("%dx^%d\t+\t",temp->coefficient,temp->exponent);
			}
			temp=temp->next;
		}
	}
}


