#include<stdio.h>
void main()
{
    struct student
    {
        int rno;
        char name[20];
        int marks[5];
        int total;
        float avg;
    }s[100];
    int i,j,n;
    printf("Enter the number of students");
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student%d",i+1);
        scanf("%d%s",&s[i].rno,s[i].name);
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s[i].total=0;
        for(j=0;j<5;j++)
        {
            s[i].total=s[i].total+s[i].marks[j];
        }
        s[i].avg=(s[i].total)/5;
    }
    printf("Details of students are\n");
    printf("Rollno\tName\tTotal\tAvg\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%f\n",s[i].rno,s[i].name,s[i].total,s[i].avg);
    }
}