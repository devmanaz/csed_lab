#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* left;
    struct node* right;
};

struct node* nodeFinder(struct node* root,int item){
    struct node* temp=root;
   while (temp->left != NULL || temp->right != NULL) {
    if (temp->item > item && temp->left != NULL) {
        temp = temp->left;
    }
    else if (temp->item == item) {
        return temp; 
    }
    else if (temp->item < item && temp->right != NULL) {
        temp = temp->right;
    }
    else {
        break;
    }
    }
    return temp;
}

struct node* findMin(struct node* root){
    struct node* least=root->right;
    while(least->left!=NULL){
        least=least->left;
    }
    return least;
}

struct node* getnode(){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void insertNode(struct node** root,int newItem){
    struct node* newnode=getnode();
    if(*root==NULL){
        *root=newnode;
        (*root)->item=newItem;
        return;
    }
    else{
        struct node* insertNode=nodeFinder(*root,newItem);
        newnode->item=newItem;
        if(insertNode->item<newItem ){
            insertNode->right=newnode;
        }
        else if(insertNode->item==newItem){
            struct node* temp=insertNode->right;
            insertNode->right=newnode;
            newnode->right=temp;
        }
        else{
            insertNode->left=newnode;
        }
    }
}



struct node* traversal(struct node* root){
    if(root->left!=NULL){
        traversal(root->left);
    }
    printf("%d ",root->item);    
    if(root->right!=NULL){
        traversal(root->right);
    }
}

void main(){
    struct node* root=NULL;
    int ch,item;
    do{
        printf("\n\n1.Insert Node\n2.Delete Node\n3.Traversal\n4.Search Node\n5.Exit");
        printf("\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case(1):{
                printf("\nEnter item: ");
                scanf("%d",&item);
                insertNode(&root,item);
                break;
            }
            case(2):{
                printf("\nEnter node item to be deleted: ");
                scanf("%d",&item);
                deleteNode(&root,item);
                break;
            }
            case(3):{
                traversal(root);
                break;
            }
            case(5):{
                break;
            }
            default:{
                printf("\n\nInvalid input");
            }
        }
    }while(ch!=5);
}


void deleteNode(struct node** root,int item)
{
    if(*root == NULL)
    {
    	return NULL;
    }
    if(*root->item < item)
    {
    	*root->right=deleteNode(*root->right,item);
    }
    else if
    {
    	*root->left = deleteNode(*root->left,item);
    }
    
    else
    {
    	if(root->left)
    	{
    		free(root);		//delete root.
    		return NULL;
    	}
    	
    	if(root->left =NULL)
    	{
    		temp=*root->right;
    		free(*root);
    		return temp;
    	}
    	
    	else if(root->right = NULL)
    	{
    		temp=root->left;
    		free(root);
    		return temp;
    	}
    	
    	temp= findMin(root->right);
    	
    	root->data = temp->data;
    	root->right = deleteNode(root->right,temp->data);
    	return root;
    	
    	
    }
}





































