
#include<stdio.h>

int f = -1; 
int r = -1; 
int n; 
int dq[100]; 

void front_insert(); 
void display(); 
void rear_insert(); 
void front_delete(); 
void rear_delete(); 

void main() { 
int ch; 
printf("Enter The Limit : ");
scanf("%d", &n);
 
do { 
printf("\n\nMENU\n\n[1] Insert Front\n[2] Insert Rear\n[3] Delete Front\n[4] Delete Rear\n[5] Display\n[6] QUIT\n\nEnter Choice : ");
scanf("%d", &ch); printf("\n"); 

switch (ch) 
{ 
case 1: 
{ 
front_insert();
break; 
}
case 2: 
{ 
rear_insert();
break; 
}
case 3: 
{ 
front_delete();
break;
}
case 4: 
{ 
rear_delete();
break;
}
case 5: 
{ 
display();
break; 
} 
case 6: 
{ 
break; 
} 
} 
} while (ch != 6); 
} 
void front_insert() 
{ 
int item; 
if (f == (r + 1) % n) 
{ 
printf("\nDeque is full\n");
} 
else if (f == -1 && r == -1) 
{ 
f = 0; 
r = 0; 
printf("\nEnter The Element : "); 
scanf("%d", &item); dq[f] = item; 
} 
else 
{ 
f = (f + n - 1) % n; 
printf("\nEnter The Element : "); 
scanf("%d", &item); 
dq[f] = item; 
} 
} 
void display() 
{ 
int i; 
if(f==-1 && r==-1)
{
printf("\nDeque Is EMpty\n");
return;
}
for (i = f; i != r; i = (i + 1) % n) 
{ 
printf("%d\t", dq[i]); 
} 
printf("%d", dq[i]); 
} 

void rear_insert() 
{ 
int item; 
if (f == (r + 1) % n) 
{ 
printf("\nQUEUE FULL\n"); 
} 
else if (f == -1 && r == -1) 
{ f = 0;
r = 0; 
printf("\nEnter Element : "); 
scanf("%d", &item); 
dq[r] = item; 
} 
else 
{ 
r = (r + 1) % n; 
printf("\nEnter Element : "); 
scanf("%d", &item); dq[r] = item; 
} 
} 

void front_delete() 
{ 
if (r == -1 && r == -1) 
{ 
printf("\nDeque Empty\n"); 
} 
else if (f == r) 
{ 
printf("\nElement Deleted : %d \n", dq[f]); 
f = -1;
 r = -1; 
 } 
 else 
 { 
 printf("Element Deleted : %d \n ", dq[f]); 
 f = (f + 1) % n; 
 } 
 } 
 
 void rear_delete() 
 { 
 if (r == -1 && r == -1) 
 { 
 printf("\nDeque Empty\n"); 
 } 
 else if (f == r) 
 { 
 printf("\nElement Deleted : %d \n", dq[r]); 
 f = -1;
 r = -1; 
 } 
 else 
 { 
 printf("\nElement Deleted : %d \n ", dq[r]); 
 r = (r - 1 + n) % n;
  }
   }  

 
