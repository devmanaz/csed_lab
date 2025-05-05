#include<stdio.h> 

int f = -1, r = -1, n = 0; 

void insert(int item, int cq[]); 
void display(int cq[]); 
void delete(int cq[]); 
void main() 
{ 

int ch, item; int cq[100]; 
printf("\nEnter The Array Limit : "); 
scanf("%d", &n); 

do { 
printf("\nMenu\n[1]Insert\n[2]Delete\n[3]Display\n[4]isFull\n[5]isEmpty\n[6]Exit\n\nEnter Choice : "); 
scanf("%d", &ch); 

switch (ch) { 
case 1: 
{ 
printf("Enter Item : "); 
scanf("%d", &item); 
insert(item, cq); 
break; 
} 
case 2: 
{
delete(cq); 
break; 
}
case 3: 
{ 
 
display(cq); 
break; 
} 
case 4: 
{ 
if ((r + 1) % n == f) 
{ 
printf("\nQueue Is Full\n"); 
} 
else 
{ 
printf("\nQueue is Not Full\n"); 
} 
break; 
} 

case 5: 
{ 
if (f == -1 && r == -1) 
{ printf("\nThe Queue Is Empty\n"); } 

else { printf("The Queue Is Not Empty\n"); }
break;
 } 
case 6: 
{ printf("\nExitting...\n"); 
break; } 
} } while (ch != 6); } 


void insert(int item, int cq[]) 
{ 
if (f == -1 && r == -1) 
{ 
f = 0; r = 0; 
} 
else if (f == (r + 1) % n) 
{ 
printf("\nQueue is full\n"); 
} 
else 
{ 
r = (r + 1) % n; 
} 
cq[r] = item; 
} 

void display(int cq[]) 
{ 
int i;
if(f==-1 && r==-1)
{
printf("\nQueue Empty\n");
}
else{
printf("The Queue Is : "); 
for (i = f; i != r; i = (i + 1) % n) 
{ 
printf("%d\t", cq[i]); 
} 
printf("%d", cq[i]); 
} 
}
void delete(int cq[]) 
{ 
int item; 
if (r == -1 && f == -1) 
{ 
printf("\nThe Array Is Empty\n"); 
return; 
} 

else if (f == r) 
{ 
printf("\nElement Deleted = %d\n", cq[f]);
 f = -1; r = -1; 
} 

else { 
printf("\nElement Deleted = %d\n", cq[f]); f = (f + 1) % n; 
} 
}
