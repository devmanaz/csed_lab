#include<stdio.h>
#include<string.h>
void main()
{
    char S[30],T[30];
    int l,i;
    printf("Enter the string\n");
    gets(S);
    l=strlen(S);
    for(i=(l-1);i>=0;i--)
    {
        strcat(S,T[i]);
    }
    if(strcmp(S,T)==0)
    {
        printf("The string %s is a palindrom");
    }
    else
    {
        printf("Not a palindrom");
    }
}
