	
/*
1.Program name : implement polynomials using arrays
2. Aim of the program : Write a menu driven C program to implement polynomials using arrays and perform polynomial addition.
3. David George Anuj
4. u2303080 S3 CSB
*/

#include <stdio.h>
int a[100];  
int b[100]; 
int c[100]; 
int m = 0; 
int n = 0; 
int r = 0; 

void readPolynomial(int poly[], int *term_count) 
{
int i;
printf("Enter the number of terms in the polynomial: ");
scanf("%d", term_count);
for (i = 0; i < *term_count; i++) 
{
printf("Enter coefficient and power of term %d: ", i + 1);
scanf("%d %d", &poly[i*2], &poly[i*2+1]);
}
}

void printPolynomial(int poly[], int term_count) 
{
for (int i=0; i<term_count;i++) 
{
printf("%dx^%d", poly[i*2], poly[i*2+1]);
if (i < term_count - 1)
{
printf(" + ");
}
}
printf("\n");
}

void addPolynomials() 
{
int p=0,q=0;
r=0;

while (p<2*m && q<2*n) 
{
if (a[p+1]==b[q+1]) 
{
c[r++] = a[p] + b[q];
c[r++] = a[p + 1];
p=p+2;
q=q+2;
} 
else if (a[p+1]>b[q+1]) 
{
            c[r++]=a[p];
            c[r++]=a[p+1];
            p=p+2;
}
else
{
c[r++]=b[q];
c[r++]=b[q+1];
q=q+2;
}
}

while (p<2*m) 
{
c[r++] = a[p];
c[r++] = a[p + 1];
p=p+2;
}

while (q<2*n) 
{
c[r++]=b[q];
c[r++]=b[q + 1];
q += 2;
}
}

void main() 
{
int ch;
printf("1.Program name : implement polynomials using arrays\n2. Aim of the program : Write a menu driven C program to\nimplement polynomials using arrays and perform polynomial addition.\n3. David George Anuj\n4. u2303080 S3 CSB\n");

    do {
        printf("\nMenu:\n");
         printf("1. Read Polynomials\n");
        printf("2. Compute Sum\n");
        printf("3. Display Sum\n");
         printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                printf("Reading Polynomial A:\n");
                readPolynomial(a, &m);
                printf("Reading Polynomial B:\n");
                readPolynomial(b, &n);
                break;
                
            case 2:
                    addPolynomials();
                    printf("Polynomials added successfully.\n");
                    break;
            case 3:
            		printf("Polynomial A is:\n");
                printPolynomial(a, m);
                printf("Polynomial B is:\n");
                printPolynomial(b, n);
                    printf("Sum Polynomial is:\n");
                    printPolynomial(c, r / 2);
                    break;
            case 4:
                 break;

        }
    } while (ch!=4);

   }



