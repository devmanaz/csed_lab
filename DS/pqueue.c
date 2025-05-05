#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct Node* front = NULL;

void enqueue(int item, int priority);
void dequeue();
void isEmpty();
void display();

int main() {
    int choice, item, priority;

    do {
        printf("\nMenu\n1] Enqueue\n2] Dequeue\n3] Is Empty\n4] Display\n5] Exit\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Item: ");
                scanf("%d", &item);
                printf("Enter Priority: ");
                scanf("%d", &priority);
                enqueue(item, priority);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void enqueue(int item, int priority) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->priority = priority;
    newNode->next = NULL;

    if (front == NULL || front->priority < priority) {
        
        newNode->next = front;
        front = newNode;
    } else {
       
        struct Node* current = front;
        while (current->next != NULL && current->next->priority >= priority) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("\nPriority Queue is Empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Element Deleted: %d\n", temp->data);
    front = front->next;
    free(temp);
}

void isEmpty() {
    if (front == NULL) {
        printf("\nPriority Queue is Empty\n");
    } else {
        printf("\nPriority Queue is Not Empty\n");
    }
}

void display() {
    if (front == NULL) {
        printf("\nPriority Queue is Empty\n");
        return;
    }

    printf("DATA\t\tPRIORITY\n");
    struct Node* current = front;
    while (current != NULL) {
        printf("%d\t\t%d\n", current->data, current->priority);
        current = current->next;
    }
}

