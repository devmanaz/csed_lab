#include <stdio.h>

#define MAX_SIZE 20

void printSparseMatrix(int matrix[MAX_SIZE][3], int size);
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);

int main() {
    int r, c, choice;
    int matrixA[MAX_SIZE][MAX_SIZE], matrixB[MAX_SIZE][MAX_SIZE];
    int sparseA[MAX_SIZE][3], sparseB[MAX_SIZE][3], result[MAX_SIZE][3];
    int i, j, k, sizeA = 0, sizeB = 0, sizeResult = 0;
    
    while (1) {
        printf("\n\n1. Addition\n2. Transpose\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("\nMatrix A\n");
                printf("Enter rows and columns: ");
                scanf("%d %d", &r, &c);

                printf("Enter matrix elements (row-wise):\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        scanf("%d", &matrixA[i][j]);
                        if (matrixA[i][j] != 0) {
                            sparseA[sizeA][0] = i;
                            sparseA[sizeA][1] = j;
                            sparseA[sizeA][2] = matrixA[i][j];
                            sizeA++;
                        }
                    }
                }
                sparseA[0][2] = sizeA;
                printSparseMatrix(sparseA, sizeA);

                printf("\nMatrix B\n");
                printf("Enter rows and columns: ");
                scanf("%d %d", &r, &c);

                printf("Enter matrix elements (row-wise):\n");
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        scanf("%d", &matrixB[i][j]);
                        if (matrixB[i][j] != 0) {
                            sparseB[sizeB][0] = i;
                            sparseB[sizeB][1] = j;
                            sparseB[sizeB][2] = matrixB[i][j];
                            sizeB++;
                        }
                    }
                }
                sparseB[0][2] = sizeB;
                printSparseMatrix(sparseB, sizeB);

                if (sizeA != sizeB || sparseA[0][0] != sparseB[0][0] || sparseA[0][1] != sparseB[0][1]) {
                    printf("Addition not possible!\n");
                } else {
                    i = 0;
                    j = 0;
                    k = 1;

                    while (i < sizeA && j < sizeB) {
                        if (sparseA[i][0] == sparseB[j][0] && sparseA[i][1] == sparseB[j][1]) {
                            result[k][0] = sparseA[i][0];
                            result[k][1] = sparseA[i][1];
                            result[k][2] = sparseA[i][2] + sparseB[j][2];
                            i++;
                            j++;
                            k++;
                        } else if (sparseA[i][0] < sparseB[j][0] || (sparseA[i][0] == sparseB[j][0] && sparseA[i][1] < sparseB[j][1])) {
                            result[k][0] = sparseA[i][0];
                            result[k][1] = sparseA[i][1];
                            result[k][2] = sparseA[i][2];
                            i++;
                            k++;
                        } else {
                            result[k][0] = sparseB[j][0];
                            result[k][1] = sparseB[j][1];
                            result[k][2] = sparseB[j][2];
                            j++;
                            k++;
                        }
                    }

                    while (i < sizeA) {
                        result[k][0] = sparseA[i][0];
                        result[k][1] = sparseA[i][1];
                        result[k][2] = sparseA[i][2];
                        i++;
                        k++;
                    }

                    while (j < sizeB) {
                        result[k][0] = sparseB[j][0];
                        result[k][1] = sparseB[j][1];
                        result[k][2] = sparseB[j][2];
                        j++;
                        k++;
                    }

                    result[0][2] = k - 1;
                    printf("\nSparse Matrix after addition:\n");
                    printSparseMatrix(result, k - 1);

                    printf("\nResultant Matrix:\n");
                    int resMat[MAX_SIZE][MAX_SIZE] = {0};
                    for (i = 1; i < k; i++) {
                        resMat[result[i][0]][result[i][1]] = result[i][2];
                    }
                    printMatrix(resMat, sparseA[0][0], sparseA[0][1]);
                }
                break;
            }

            case 2: {
                printf("\nMatrix A\n");
                printf("Enter rows and columns: ");
                scanf("%d %d", &r, &c);

                printf("Enter matrix elements (row-wise):\n");
                sizeA = 0;
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        scanf("%d", &matrixA[i][j]);
                        if (matrixA[i][j] != 0) {
                            sparseA[sizeA][0] = i;
                            sparseA[sizeA][1] = j;
                            sparseA[sizeA][2] = matrixA[i][j];
                            sizeA++;
                        }
                    }
                }
                sparseA[0][2] = sizeA;

                printf("\nSparse Matrix A:\n");
                printSparseMatrix(sparseA, sizeA);

                if (sizeA > (r * c) / 2) {
                    printf("It's not a sparse matrix!\n");
                    break;
                } else {
                    printf("It's a sparse matrix!\n");
                }

                int transpose[MAX_SIZE][3];
                transpose[0][0] = sparseA[0][1];
                transpose[0][1] = sparseA[0][0];
                transpose[0][2] = sparseA[0][2];

                k = 1;
                for (i = 0; i < c; i++) {
                    for (j = 1; j <= sizeA; j++) {
                        if (sparseA[j][1] == i) {
                            transpose[k][0] = sparseA[j][1];
                            transpose[k][1] = sparseA[j][0];
                            transpose[k][2] = sparseA[j][2];
                            k++;
                        }
                    }
                }

                transpose[0][2] = k - 1;
                printf("\nArray implementation of Transposed Matrix:\n");
                printSparseMatrix(transpose, k - 1);

                printf("\nTransposed Matrix:\n");
                int transMat[MAX_SIZE][MAX_SIZE] = {0};
                for (i = 1; i < k; i++) {
                    transMat[transpose[i][0]][transpose[i][1]] = transpose[i][2];
                }
                printMatrix(transMat, sparseA[0][1], sparseA[0][0]);
                break;
            }

            case 3:
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void printSparseMatrix(int matrix[MAX_SIZE][3], int size) {
    printf("Row\tColumn\tValue\n");
    for (int i = 0; i <= size; i++) {
        printf("%d\t%d\t%d\n", matrix[i][0], matrix[i][1], matrix[i][2]);
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

