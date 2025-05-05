#include<stdio.h>
#include<string.h>
void main()
{
    char S[30];
    int l,i,j,flag=0;
    printf("Enter the string\n");
    gets (S);
    l=strlen(S);
    for(i=0;i=l/2;i++)
    {
        j=l-1;
        if(S[i]!=S[j])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("The string %s is palindrom");
    }
    else
    {
        printf("The string %s is not a palindrom");
    }
 }