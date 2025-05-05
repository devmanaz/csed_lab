
#include<stdio.h> 
int flag; 
void read(int x[][10], int r, int c); 
void print(int x[][10], int r, int c); 
void sparse(int x[][10], int y[][10], int r, int c); 
void tspm(int x[][10], int y[][10]); 
void sum(int x[][10], int y[][10], int z[][10]); 
void main() 
{ 
int a[10][10], spm[10][10], tspm1[10][10], r, c, k, ch; 
int sum1[10][10], sum2[10][10], sum3[10][10], spm1[10][10], spm2[10][10], r1, r2, c1, c2,  sum_spm[10][10]; 
do 
{ 
printf("\nName : David George Anuj\nClass : S3-CSE-Beta\nRoll no : 07\n"); 
printf("\nMENU\n[1]Find Transpose\n[2]Find SUM\n[3]EXIT\n\nEnter Choice : "); scanf("%d", &ch); 
switch (ch) 
{ 
case 1: 
{ 
printf("\n"); 
printf("Enter Row No : "); 
scanf("%d", &r); 
printf("Enter Column No : "); 
scanf("%d", &c);
printf("\nEnter The Elements\n"); 
read(a, r, c); 
printf("\nPrinting The Matrix ...\n"); 
print(a, r, c); 
sparse(a, spm, r, c); 
if (flag <= r * c / 2) 
{ 
printf("\nIt is a Sparse Matrix !!!\n"); 
printf("\n"); 
printf("Printing The Sparse Matrix ...\n"); 
print(spm, spm[0][2] + 1, 3); 
tspm(spm, tspm1); 
printf("Printing The Transpose of Sparse Matrix ...\n"); print(tspm1, tspm1[0][2] + 1, 3); 
} 
else 
{ 
printf("\nIts Not A Sparse Matrix \nExitting...\n"); 
} 
break; 
} 
case 2:
{ 
printf("\n"); 
printf("Enter Row No : "); 
scanf("%d", &r1); 
printf("Enter Column No : "); 
scanf("%d", &c1); 
printf("\n"); 
printf("Enter Row No : "); 
scanf("%d", &r2); 
printf("Enter Column No : "); 
scanf("%d", &c2); 
printf("\n"); 
if (r1 != r2 || c2 != c1) 
{ 
printf("Invlaid Order\nExiting...\n"); 
} 
else 
{ 
printf("Enter The Elements for matrix A ...\n"); 
read(sum1, r1, c1); 
printf("Enter The Elements for matrix B....\n"); 
read(sum2, r2, c2); 
sparse(sum1, spm1, r1, c1); 
if (flag >= (r1 * c1) / 2) 
{
printf("\nIts Not A Sparse Matrix \nExitting...\n"); 
break; 
} 
sparse(sum2, spm2, r2, c2); 
if (flag >= (r2 * c2) / 2) 
{ 
printf("\nIts Not A Sparse Matrix \nExitting...\n"); 
break; 
} 
printf("Matrix A is ...\n"); 
print(sum1, r1, c1); 
printf("Matrix B is ...\n"); 
print(sum2, r2, c2); 
printf("Sparse Matrix A is ...\n"); 
print(spm1, spm1[0][2] + 1, 3); 
printf("Sparse Matrix B is ...\n"); 
print(spm2, spm2[0][2] + 1, 3); 
sum(spm1, spm2, sum_spm); 
printf("Sparse Sum Matrix is ...\n"); 
print(sum_spm, sum_spm[0][2] + 1, 3); 
} 
} 
} 
} while (ch != 3); 
}
void read(int x[][10], int r, int c) 
{ 
int i, j; 
for (i = 0; i < r; i++) 
{ 
for (j = 0; j < c; j++) 
{ 
scanf("%d", &x[i][j]); 
} 
} 
} 
void print(int x[][10], int r, int c) 
{ 
int i, j; 
for (i = 0; i < r; i++) 
{ 
for (j = 0; j < c; j++) 
{ 
printf("%d\t", x[i][j]); 
} 
printf("\n"); 
} 
} 
void sparse(int x[][10], int y[][10], int r, int c)
{ 
int i, j; 
int k = 0; 
for (i = 0; i < r; i++) 
{ 
for (j = 0; j < c; j++) 
{ 
if (x[i][j] != 0) 
{ 
k = k + 1; 
y[k][0] = i; 
y[k][1] = j; 
y[k][2] = x[i][j]; 
} 
} 
} 
flag = k; 
y[0][0] = r; 
y[0][1] = c; 
y[0][2] = k; 
} 
void tspm(int x[][10], int y[][10]) 
{ 
int i, j; 
for (i = 0; i < x[0][1]; i++) 
{ 
for (j = 1; j <= x[0][2]; j++) 
{ 
if (x[j][1] == i)
{ 
y[j][0] = x[j][1]; 
y[j][1] = x[j][0]; 
y[j][2] = x[j][2]; 
} 
} 
} 
y[0][0] = x[0][1]; 
y[0][1] = x[0][0]; 
y[0][2] = x[0][2]; 
} 
void sum(int x[][10], int y[][10], int z[][10]) 
{ 
int i, j; 
int p = 1, q = 1, r = 0; 
for (i = 0; i < x[0][0]; i++) 
{ 
for (j = 0; j < x[0][1]; j++) 
{ 
if (x[p][0] == i && x[p][1] == j && y[q][0] == i && y[q][1] == j) 
{ 
r++; 
z[r][0] = i; 
z[r][1] = j; 
z[r][2] = x[p][2] + y[q][2]; 
p++; 
q++; 
}
else if (x[p][0] == i && x[p][1] == j) 
{ 
r++; 
z[r][0] = i; 
z[r][1] = j; 
z[r][2] = x[p][2]; 
p++; 
} 
else if (y[q][0] == i && y[q][1] == j) 
{ 
r++; 
z[r][0] = i; 
z[r][1] = j; 
z[r][2] = y[q][2]; 
q++; 
} 
} 
} 
z[0][0] = x[0][0]; 
z[0][1] = x[0][1]; 
z[0][2] = r; 
}

