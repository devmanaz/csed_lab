#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int item;
    struct node* left;
    struct node* right;
};

// Function to find the minimum value in the tree
int findMin(struct node* least) {
    while (least->left != NULL) {
        least = least->left;
    }
    return least->item;
}

// Function to create a new node
struct node* getnode() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// Function to insert a new node into the tree
struct node* insertNode(struct node** root, int newItem) {
    struct node* newnode = getnode();
    newnode->item = newItem;
    if (*root == NULL) {
        *root = newnode;
        return NULL;
    } else {
        if ((*root)->item < newItem) {
            if ((*root)->right != NULL) {
                insertNode(&(*root)->right, newItem);
                return NULL;
            }
            (*root)->right = newnode;
        } else if ((*root)->item > newItem) {
            if ((*root)->left != NULL) {
                insertNode(&(*root)->left, newItem);
                return NULL;
            }
            (*root)->left = newnode;
        }
    }
    return *root;
}

// Function to delete a node from the tree
struct node* deleteNode(struct node** root, int item) {
    struct node* temp;
    if (*root == NULL) {
        printf("\nItem: %d doesn't exist in the tree", item);
        return NULL;
    }
    if ((*root)->item < item) {
        (*root)->right = deleteNode(&((*root)->right), item);
    } else if ((*root)->item > item) {
        (*root)->left = deleteNode(&((*root)->left), item);
    } else {
        if ((*root)->right == NULL && (*root)->left == NULL) {
            free(*root);
            return NULL;
        } else if ((*root)->right == NULL) {
            temp = (*root)->left;
            free(*root);
            return temp;
        } else if ((*root)->left == NULL) {
            temp = (*root)->right;
            free(*root);
            return temp;
        }
        int min = findMin((*root)->right);
        (*root)->right = deleteNode(&((*root)->right), min);
        (*root)->item = min;
    }
    return (*root);
}

// In-order traversal
void inTraversal(struct node* root) {
    if (root->left != NULL) {
        inTraversal(root->left);
    }
    printf("%d ", root->item);
    if (root->right != NULL) {
        inTraversal(root->right);
    }
}

// Pre-order traversal
void preTraversal(struct node* root) {
    printf("%d ", root->item);
    if (root->left != NULL) {
        preTraversal(root->left);
    }
    if (root->right != NULL) {
        preTraversal(root->right);
    }
}

// Post-order traversal
void postTraversal(struct node* root) {
    if (root->left != NULL) {
        postTraversal(root->left);
    }
    if (root->right != NULL) {
        postTraversal(root->right);
    }
    printf("%d ", root->item);
}

// Function to search for a node in the tree
struct node* search(struct node* root, int nodeItem) {
    if (root == NULL) {
        printf("\nElement not found!");
        return NULL;
    }
    if (root->item < nodeItem) {
        search(root->right, nodeItem);
    } else if (root->item > nodeItem) {
        search(root->left, nodeItem);
    } else {
        printf("\nItem: %d found", nodeItem);
    }
    return root;
}

int main() {
    struct node* root = NULL;
    int ch, item;

    do {
        printf("\n\n1. Insert Node\n2. Delete Node\n3. In-order Traversal");
        printf("\n4. Pre-order Traversal\n5. Post-order Traversal");
        printf("\n6. Search Node\n7. Exit");
        printf("\n\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter item: ");
                scanf("%d", &item);
                insertNode(&root, item);
                break;
            case 2:
                printf("\nEnter node item to be deleted: ");
                scanf("%d", &item);
                deleteNode(&root, item);
                break;
            case 3:
                if (root == NULL) {
                    printf("Tree is empty!");
                } else {
                    printf("\nIn-order Traversal: ");
                    inTraversal(root);
                }
                break;
            case 4:
                if (root == NULL) {
                    printf("Tree is empty!");
                } else {
                    printf("\nPre-order Traversal: ");
                    preTraversal(root);
                }
                break;
            case 5:
                if (root == NULL) {
                    printf("Tree is empty!");
                } else {
                    printf("\nPost-order Traversal: ");
                    postTraversal(root);
                }
                break;
            case 6:
                if (root == NULL) {
                    printf("Tree is empty!");
                } else {
                    printf("\nEnter node to search: ");
                    scanf("%d", &item);
                    search(root, item);
                }
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("\nInvalid input!");
        }
    } while (ch != 7);

    return 0;
}
