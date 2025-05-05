#include <stdio.h>

void main()
{
    int n, i, j;
    printf("enter the number of lines \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j <= 1; j--)
        {
            printf("%d ", j); // Added a space after %d to separate the numbers
        }
        printf("\n");
    }
}
