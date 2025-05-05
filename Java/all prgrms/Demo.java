import java.util.Scanner;
class Bank
{ 
int accountnumber;
String accountname;
int accountbalance;
public Bank()
{
accountnumber=12345;
accountname="James Cameroon";
accountbalance=2000;
}
public Bank(int A,String B,int c)
{
accountnumber=A;
accountname=B;
accountbalance=c;
}
public void deposit(int x)
{
accountbalance=accountbalance+x;
System.out.println("Amount Deposited : "+x);
System.out.println("Amount Balance   : "+accountbalance);
}
public void withdraw(int y)
{
accountbalance=accountbalance-y;
System.out.println("Amount Withdrawn : "+y);
System.out.println("Amount Balance   : "+accountbalance);
}
public void balance()
{
System.out.println("Amount Balance   : "+accountbalance);
}
public void display()
{
System.out.println("Amount Number    : "+accountnumber);
System.out.println("Amount Name      : "+accountname);
System.out.println("Amount Balance   : "+accountbalance);
}
}
public class Demo
{
	public static void main(String[] args)
	{
	Bank b1=new Bank();
	b1.deposit(1000);
	b1.withdraw(500);
	b1.balance();
	b1.display();
	System.out.println();
	Bank b2=new Bank(678910,"Arnold B",1000);
	Scanner scanner =new Scanner(System.in);
	int ch;
	do{
	 System.out.println("[1] Deposit\n[2] Withdraw\n[3] Balance\n[4]Display  ");
	 System.out.print("Choice :");
	 ch=scanner.nextInt();
	
	switch(ch)
	{
		case 1:
		{
		b2.deposit(1000);
		break;
		}
	
		case 2:
		{
		b2.withdraw(500);
		break;
		}
		
		case 3:
		{
		b2.balance();
		break;
		}
		
		case 4:
		{
		b2.display();
		break;
		}
}}while(ch<5);}}


