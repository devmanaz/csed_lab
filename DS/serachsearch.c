#include <stdio.h>

void printArray(int arr[], int n);

void bubbleSort(int arr[], int n) {
int count =0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
                printf("Pass %d : ", count);
                printArray(arr, n);
            }
            else
            {
            count ++;
            printf("Pass %d : ", count);
            
            }
        }
    }
}

void selectionSort(int arr[], int n) {
int count =0;
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
         count++;
                printf("Pass %d : ", count);
                printArray(arr, n);
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
                
            }
           
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) 
{
 int count =0 ;
 
    for (int i = 1; i < n; i++) {
        
         int count2 =0;
      
        int key = arr[i];
        int j = i - 1;
         printf("Pass %d : ", count);
         
         printArray(arr, n);
         count ++;
         count2=1;
        
        while (j >= 0 && arr[j] > key) 
        {
        	if(count2==0)
        	{
        	printf("Pass %d : ", count);
                printArray(arr, n);
                count ++;
        	}
            
           
            arr[j + 1] = arr[j];
            j = j - 1;
            	printf("Pass %d : ", count);
         
         printArray(arr, n);
         count ++;
        }
         arr[j + 1] = key;
         
       
        
    }
    printf("Pass %d : ", count);
                printArray(arr, n);
                count ++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, choice;
    int arr2[100];
    int arr3[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bubbleSort(arr, n);
                printf("Sorted array using Bubble Sort: ");
                printArray(arr, n);
                break;

            case 2:
            printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

                selectionSort(arr2, n);
                printf("Sorted array using Selection Sort: ");
                printArray(arr2, n);
                break;

            case 3:
            printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr3[i]);
    }
                insertionSort(arr3, n);
                printf("Sorted array using Insertion Sort: ");
                printArray(arr3, n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

