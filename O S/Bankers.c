#include <stdio.h>
int max[50][50],alloc[50][50],need[50][50],avail[50],n,r,finish[50];
int main() 
{
    printf("Enter the no of processors: ");
    scanf("%d", &n);
    printf("Enter the no of resources: ");
    scanf("%d", &r);
    printf("Enter the max matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &max[i][j]);
        }
    }
    printf("Enter the allocation matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &alloc[i][j]);
        }
    }
    printf("Enter the available resources:\n");
    for (int i = 0; i < r; i++) {
        scanf("%d", &avail[i]);
    }
    for (int i = 0; i < n; i++) {
        finish[i] = 0;
        for (int j = 0; j < r; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    int safeSequence[50], index = 0;
    int c = 0;

    while (c < n) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (finish[i] == 0) {
                int c1 = 1;
                for (int j = 0; j < r; j++) {
                    if (need[i][j] >= avail[j]) {
                        c1 = 0;
                        break;
                    }
                }
                if (c1) {
                    for (int j = 0; j < r; j++) {
                        avail[j] += alloc[i][j];
                    }
                    safeSequence[index++] = i;
                    finish[i] = 1;
                    found = 1;
                    c++;
                }
            }
        }
        if (!found) {
            printf("The system is not in a safe state.\n");
            return 1;
        }
    }

    printf("The system is in a safe state.\nSafe sequence is: ");
    for (int i = 0; i < n; i++) {
        printf("P%d ", safeSequence[i]);
    }
    printf("\n");
    return 0;
}