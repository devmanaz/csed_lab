import java.util.Scanner;
public class LinearSearch
{
public static void main(String args[])
{
Scanner scanner=new Scanner(System.in);
System.out.print("ENTER THE LIMIT : ");
int n=scanner.nextInt();
System.out.print("ENTER ELEMENT TO BE SEARCHED :");
int item=scanner.nextInt();
int a[]=new int[n];
int i;
int flag=0;
for(i=0;i<n;i++)
{
System.out.println("ENTER ELEMENT "+(i+1)+": ");
a[i]=scanner.nextInt();
}
for(i=0;i<n;i++)
{
if(a[i]==item)
{
flag=1;
break;
}
}
if(flag==1)
{
System.out.println("ELEMENT FOUND AT "+(i+1));
}
else
{
System.out.println("ELEMENT NOT FOUND");
}

}
}
