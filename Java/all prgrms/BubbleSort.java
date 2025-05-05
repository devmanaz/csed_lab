import java.util.Scanner;
public class BubbleSort
{
public static void main(String args[])
{
Scanner scanner=new Scanner(System.in);
System.out.print("ENTER THE LIMIT : ");
int n=scanner.nextInt();
int a[]=new int[n];
int i;
int flag=0;
int temp;
for(i=0;i<n;i++)
{
System.out.println("ENTER ELEMENT "+(i+1)+": ");
a[i]=scanner.nextInt();
}
int j;

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
System.out.println("ELEMENT "+(i+1)+": "+a[i]);
}
}
}
