#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node{
    int data;
    struct node*link;
};
struct node *ptr,*head=NULL;
struct node *temp;
void main(){
if (head==NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d",&temp->data);
    temp->link=NULL;
    head=temp;
}
else
{
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    temp=(struct node*)malloc(size of(struct node));
    printf("Enter the element");
    scanf("%d"&temp->data);
    temp->link=NULL;
    ptr->link=temp;

}}