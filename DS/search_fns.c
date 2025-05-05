/*
1.Program name : Searching Algorithms 1)Linear Search 2)Binary Search
2. Aim of the program : 1. Write a Menu driven program to implement Searching Algorithms.
3. David George Anuj
4. u2303080 S3 CSB
*/

#include <stdio.h>

void linear(int s, int a[], int n) 
{
    int flag = 0;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (a[i] == s) 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) 
    {
        printf("The element was found at position: %d\n", i + 1);
    } else 
    {
        printf("Element not found in the array\n");
    }
}

void binary(int s, int a[], int n) 
{
    int i, temp, j;

    for (i = 0;i< n-1;i++) 
    {
        for (j = 0;j <n-i-1;j++) 
        {
            if (a[j] > a[j+1]) 
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The sorted elements are:\n");
    for (j = 0; j < n; j++) 
    {
        printf("%d\n", a[j]);
    }


    int low = 0, high = n - 1, mid, flag = 0;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        if (a[mid] == s) 
        {
            printf("The element was found at position: %d\n", mid + 1);
            flag = 1;
            break;
        }
        if (a[mid] > s) 
        {
            high = mid - 1;
        } else 
        {
            low = mid + 1;
        }
    }
    if (flag == 0) 
    {
        printf("Element not found in the array\n");
    }
}

int main() {
    int n, i, a[50], search, op;

    do {
        printf("\nENTER LIMIT : ");
        scanf("%d", &n);



        for (i = 0; i < n; i++) 
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &a[i]);
        }

        printf("\n1) LINEAR SEARCH\n");
        printf("2) BINARY SEARCH\n");
        printf("3) EXIT\n");
        printf("\nEnter the option: ");
        scanf("%d", &op);

        if (op == 3) 
        {
            break;
        }

        if (op == 1 || op == 2) 
        {
            printf("\nEnter the element to be found: ");
            scanf("%d", &search);

            if (op == 1) 
            {
                linear(search, a, n);
            } else if (op == 2) {
                binary(search, a, n);
            } else 
            {
                printf("Invalid option selected.\n");
            }
        } 
        
        else 
        {
            printf("Invalid option selected.\n");
        }

    } while (op != 3);

    return 0;
}

