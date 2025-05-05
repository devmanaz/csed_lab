import java.util.Scanner;

public class Week2two
{
public static void main(String[] args)
{
int i,j;

Scanner scanner = new Scanner(System.in);

System.out.println("Enter The Order Of Matrix A .");
int m1 = scanner.nextInt();
int n1 = scanner.nextInt();

int a[][]=new int[m1][n1];

System.out.println("Enter The Order Of Matrix B .");
int m2 = scanner.nextInt();
int n2 = scanner.nextInt();

int b[][]=new int[m2][n2];

int c[][]=new int[m1][n1];

if((n1==n2)&&(m1==m2))
{
	System.out.println("Enter The Elements Of Matrix A .");

	for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
	{
	a[i][j] = scanner.nextInt();
	}
	}
	
	System.out.println("Enter The Elements Of Matrix B .");
	
	for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
	{
	b[i][j] = scanner.nextInt();
	}
	}
	
	System.out.println("The Matrix A is .");
	
	for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
	{
	System.out.print(a[i][j]+" ");
	}
	System.out.println();
	}
	
	System.out.println("The Matrix B is .");
	
	for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
	{
	System.out.print(b[i][j]+" ");
	}
	System.out.println();
	}
	
	System.out.println("The Sum Of Matrix A and B is .");
	
	for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	System.out.print(c[i][j]+" ");
	}
	System.out.println();
	}
	
	System.out.println("The Transpose Of Resultant Is .");
	
	for(i=0;i<n1;i++)
	{
	for(j=0;j<m1;j++)
	{
	System.out.print(c[j][i]+" ");
	}
	System.out.println();
	}
	
	
}	
	
else
{
System.out.println("The Order Is Invalid .");
}	










}



}
