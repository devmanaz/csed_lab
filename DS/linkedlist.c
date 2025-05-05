#include <stdio.h>
#include <stdlib.h> 
struct node 
{ 
  int data; 
    struct node* next; 
}; 

struct node* head = NULL; 
struct node* getnode(); 
void insert_front(); 
void insert_rear(); 
void display(); 
void insert_pos(); 
void delete_front(); 
void delete_rear(); 
void delete_pos(); 

void main() 
{ 
    int ch; 

    do 
    { 
       printf("\n\nMENU\n\n");
       printf("Insertion\n");
        printf("[1] Insert at beginning\n");
        printf("[2] Insert at end\n");
        printf("[3] Insert at specific position\n\n");
        printf("Deletion\n");
        printf("[4] Delete from beginning\n");
        printf("[5] Delete From End\n");
        printf("[6] Delete From Specific Position\n\n");
        printf("[7] Display\n");
        printf("[8] Exit\n\n");
        printf("Enter Choice : "); 
        scanf("%d", &ch); 

        switch (ch) 
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
    } while (ch != 8); 
} 

struct node* getnode() 
{ 
    struct node* t = (struct node*)malloc(sizeof(struct node)); 
    return t; 
} 

void insert_front() 
{ 
    int item; 
    struct node* p; 
    p = getnode(); 
    
    printf("\nEnter The item : "); 
    scanf("%d", &item); 
    
    if (head == NULL) 
    { 
        p->next = NULL; 
        p->data = item; 
        head = p; 
    } 
    else 
    { 
        p->next = head; 
        p->data = item; 
        head = p; 
    } 
    
    printf("\nFront Insert Complete\n\n"); 
} 

void insert_rear() 
{ 
    struct node* p = getnode(); 
    int item; 
    
    printf("\nEnter The item : "); 
    scanf("%d", &item); 
    
    if (head == NULL) 
    { 
        head = p; 
        p->data = item; 
        p->next = NULL; 
    } 
    else 
    { 
        struct node* t; 
        t = head; 
        
        while (t->next != NULL) 
        { 
            t = t->next; 
        } 
        
        t->next = p; 
        p->data = item; 
        p->next = NULL; 
    } 
} 

void insert_pos() 
{ 
    int item; 
    struct node* t; 
    struct node* pre; 
    struct node* p; 
    
    t = head; 
    p = getnode(); 
    
    printf("\nEnter The Element : "); 
    scanf("%d", &item); 
    p->data = item; 
    p->next = NULL; 
    
    if (head == NULL) 
    { 
        head = p; 
        p->next = NULL; 
    } 
    else 
    { 
        int i, n; 
        printf("\nEnter The Position To Insert : "); 
        scanf("%d", &n); 
        
        if (n == 1) 
        { 
            p->next = head; 
            head = p; 
        } 
        
        for (i = 1; i < n; i++) 
        { 
            pre = t; 
            t = t->next; 
        } 
        
        pre->next = p; 
        p->next = t; 
    } 
} 

void delete_front() 
{ 
    struct node* t; 
    
    if (head == NULL) 
    { 
        printf("Node Is Empty\n"); 
    } 
    else 
    { 
        t = head; 
        head = t->next; 
        free(t); 
    } 
} 

void delete_rear() 
{ 
    struct node* t; 
    t = head; 
    
    if (head == NULL) 
    { 
        printf("\nNode Is Empty\n"); 
    } 
    else if (head->next == NULL) 
    { 
        free(head); 
        head = NULL; 
    } 
    else 
    { 
        while (t->next->next != NULL) 
        { 
            t = t->next; 
        } 
        
        struct node* temp = t->next; 
        t->next = NULL; 
        free(temp); 
    } 
} 

void delete_pos() 
{ 
    if (head == NULL) 
    { 
        printf("\nLinked List Empty\n"); 
    } 
    else 
    { 
        int i; 
        int n; 
        struct node* t, * prev, * p; 
        
        printf("Enter The Position : "); 
        scanf("%d", &n); 
        t = head; 
        
        for (i = 1; i < n; i++) 
        { 
            prev = t; 
            t = t->next; 
        } 
        
        if (n == 1) 
        { 
            p = head->next; 
            free(head); 
            head = p; 
        } 
        else 
        { 
            prev->next = t->next; 
            free(t); 
        } 
    } 
} 

void display() 
{ 
    if (head == NULL) 
    { 
        printf("Linked List Is Empty"); 
    } 
    else 
    { 
        struct node* t; 
        printf("\n\nThe List is : "); 
        t = head; 
        
        while (t->next != NULL) 
        { 
            printf("\t%d", t->data); 
            t = t->next; 
        } 
        
        printf("\t%d", t->data); 
    } 
}

