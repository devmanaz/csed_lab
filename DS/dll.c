#include<stdio.h>
struct node
{
struct node *rlink;
struct node *llink;
int data;
};
struct node *head=NULL;
struct node *tail=NULL;

void FrontInsert();

void main()
{

do{
printf("\t\t MENU\n[1]FrontInsert\n[2]RearInsert\n[3]FrontDelete\n[4]RearDelete\n[5]EXIT\nEnter Choice : ");
scanf("%d",&ch);

switch (ch) :
{
case 1:
{
FrontInsert();
}
case 2:
{

}
case 3:
{

}
case 4:
{

}
}
}while(ch!=5);

}


void FrontInsert()
{
int item;
printf("Enter Element : ");
scanf("%d",item);
struct node *p=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{

p->rlink=NULL;
p->llink=NULL;
p->data=item;

head=p;
tail=p;
}
else
{
p->rlink=head;
p->llink=NULL;
p->data=item;

head->llink=p;
head=p;
}
}
void RearInsert()
{
int item;
printf("Enter Element : ");
scanf("%d",item;
struct node *p=(struct node*)malloc(sizeof(struct node));

p->llink=tail;
p->data=item;
p->rlink=NULL;
tail->rlink=p;
tail=p;
}
void InsertPos()
{
int pos;
printf("Enter Position : ");
scanf("%d",&pos);
struct node *p=(struct node *)malloc(sizeof(struct node));

struct node *t=head;
for(int i=1;i<n;i++)
{
t=t->next;
}
if(pos!=1)
{
//do
}

