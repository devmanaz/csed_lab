#include<stdio.h>
void main()
{
    struct book
    {
        char productid[20],mani[10],name[30],exp[10];
        int prize;
    }s;
    printf("Enter the product id,mani,Name,exp,prize of the product\n");
    scanf("%s%s%s%s%d",s.productid,s.mani,s.name,&s.prize);
    printf("Details of the product are %s%s%s%s%d",s.productid,s.mani,s.name,s.name,s.exp,s.prize);
}