#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* getnode();
void insert_front();
void insert_rear();
void insert_pos();
void delete_front();
void delete_rear();
void delete_pos();
void display();

struct node* getnode()
{
    struct node* t=(struct node*)malloc(sizeof(struct node));
    return t;
}
void main()
{
    int ch;
    do
    {
    printf("MENU\n");
    printf("Insert at front\n");
    printf("Insert at rear\n");
    printf("Insert at perticular pos\n");
    printf("delete at front\n");
    printf("delete at rear\n");
    printf("delete at perticular pos\n");
    printf("Display\n");
    printf("Exit\n");
    switch(ch)
    {
        case 1:
        {
            insert_front();
            break;
        }
        case 2:
        {
            insert_rear();
            break;
        }
        case 3:
        {
            insert_pos();
            break;
        }
        case 4:
        {
            delete_front();
            break;
        }
        case 5:
        {
            delete_rear();
            break;
        }
        case 6:
        {
            delete_pos();
            break;
        }
        case 7:
        {
            display();
            break;
        }
    }
    }while(ch!=8);   
}
void insert_front()
{
    int item;
    struct node* p = getnode();
    printf("Enter the item\n");
    scanf("%d",&item);
    if(head==NULL)
    {
      p ->next= NULL;
      p ->data= item;
      head = p;  
    }
    else
    {
        p ->next= head;
        p ->data= item;
        head = p; 
    }
}
void insert_rear()
{
    int item;
    struct node* p=getnode();
    printf("Enter the item\n");
    scanf("%d",&item);
    if(head==NULL)
    {
        head=p;
        p ->data=item;
        p->next=head;
    }
    else
    {
        struct node* t;
       
    }
}