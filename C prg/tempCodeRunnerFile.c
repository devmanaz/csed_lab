#include <stdio.h>

void transp(int a[40][40])
{
    int c[40][40], i, j, k = 1;
    c[0][0] = a[0][1];
    c[0][1] = a[0][0];
    for (i = 0; i < c[0][0]; i++)
    {
        for (j = 1; j <= a[0][2]; j++)
        {
            if (a[j][1] == i)
            {
                c[k][0] = a[j][1];
                c[k][1] = a[j][0];
                c[k][2] = a[j][2];
                k++;
            }
        }
    }
    c[0][2] = k - 1;

    printf("The transpose is:\n");
    for (i = 0; i <= c[0][2]; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void dispTriplet(int c[40][40])
{
    printf("Triplet form of matrix is:\n");
    for (int i = 0; i <= c[0][2]; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void convertToTriplet(int a[40][40], int r1, int c1, int triplet[40][40])
{
    int k = 1;
    triplet[0][0] = r1;
    triplet[0][1] = c1;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (a[i][j] != 0)
            {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = a[i][j];
                k++;
            }
        }
    }
    triplet[0][2] = k - 1;
}

void addSparse(int a[40][40], int b[40][40], int result[40][40])
{
    int i = 1, j = 1, k = 1;
    result[0][0] = a[0][0]; // Rows
    result[0][1] = a[0][1]; // Columns

    while (i <= a[0][2] && j <= b[0][2])
    {
        if (a[i][0] == b[j][0] && a[i][1] == b[j][1])
        {
            result[k][0] = a[i][0];
            result[k][1] = a[i][1];
            result[k][2] = a[i][2] + b[j][2];
            i++;
            j++;
            k++;
        }
        else if (a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1] < b[j][1]))
        {
            result[k][0] = a[i][0];
            result[k][1] = a[i][1];
            result[k][2] = a[i][2];
            i++;
            k++;
        }
        else
        {
            result[k][0] = b[j][0];
            result[k][1] = b[j][1];
            result[k][2] = b[j][2];
            j++;
            k++;
        }
    }

    while (i <= a[0][2])
    {
        result[k][0] = a[i][0];
        result[k][1] = a[i][1];
        result[k][2] = a[i][2];
        i++;
        k++;
    }

    while (j <= b[0][2])
    {
        result[k][0] = b[j][0];
        result[k][1] = b[j][1];
        result[k][2] = b[j][2];
        j++;
        k++;
    }

    result[0][2] = k - 1;
}

void main()
{
    int a[40][40], b[40][40], c[40][40], d[40][40], result[40][40], r1, c1, r2, c2, i, j, ch;

    printf("Enter the rows for 1st matrix:\n");
    scanf("%d", &r1);
    printf("Enter the columns for 1st matrix:\n");
    scanf("%d", &c1);

    printf("Enter the data for 1st matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows for 2nd matrix:\n");
    scanf("%d", &r2);
    printf("Enter the columns for 2nd matrix:\n");
    scanf("%d", &c2);

    printf("Enter the data for 2nd matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The 1st input matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("The 2nd input matrix is:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    convertToTriplet(a, r1, c1, c);  triplet
    convertToTriplet(b, r2, c2, d);  

    do
    {
        printf("\nThe menu is:\n");
        printf("1. Transpose of 1st matrix\n");
        printf("2. Display 1st matrix in triplet form\n");
        printf("3. Add both matrices and display result in triplet form\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                transp(c);
                break;

            case 2:
                dispTriplet(c);
                break;

            case 3:
                if (r1 != r2 || c1 != c2)
                {
                    printf("Matrix dimensions do not match for addition.\n");
                }
                else
                {
                    addSparse(c, d, result);
                    printf("The result of addition in triplet form is:\n");
                    dispTriplet(result);
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch != 4);
}
