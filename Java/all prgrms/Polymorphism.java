import java.util.Scanner;
/*
1.Program name : implement polynomials using arrays
2. Aim of the program : Write a menu driven C program to implement Polymorphism for Employee Question.
3. David George Anuj
4. u2303080 S3 CSB
*/
class Employee
{
	String name;
	int salary;
	
	public Employee(String name,int salary)
	{
	this.name=name;
	this.salary=salary;
	}
	
	public void work()
	{
	System.out.println("name : "+name+"salary : "+salary);
	}
	public void salary()
	{
	System.out.println("Salary : "+salary);
	}

}

class Manager extends Employee
{

	String department;
	int m_id;

	public Manager(String name,int salary,String department,int m_id)
	{
	super(name,salary);
	this.department=department;
	this.m_id=m_id;
	}

	public void work()
	{
	System.out.println("name : "+name+"salary : "+salary+"department : "+department+"m_id : "+m_id);
	}
	
	public void department() 
	{
	System.out.println("departmeny is "+department);
	}	

}

class SeniorManager extends Manager
{

	String assistant;
	int bonus;

	public SeniorManager(String name,int salary,String department,int m_id,String assistant,int bonus)
	{
	super(name,salary,department,m_id);
	this.assistant=assistant;
	this.bonus=bonus;
	}



	public void work()
	{
	System.out.println("\nEmploye name is "+name+" \nEmploye salary is "+salary+" \nEmployee department is "+department+"\nEmployee id is "+m_id+"\nEmployees asssistent is "+assistant+" \nEmployee bonus "+bonus);
	}

	public void bonus()
	{
	System.out.println("\nThis was called from inside subclass Senior Manager ");
	}

}

class Developer extends Employee
{
	String branch;
	int rank;
	
	public Developer(String name,int salary,String branch,int rank)
	{
	super(name,salary);
	this.branch=branch;
	this.rank=rank;
	}
	public void work()
	{
	System.out.println("Name is "+name+"Salary is "+salary+"Branch is"+branch+"rank is "+rank);
	}
	public void rank()
	{
	System.out.println("Rank is "+rank);
	}
}

class JuniorDeveloper extends Developer
{
	String mentor;
	int date;
	public JuniorDeveloper(String name,int salary,String branch,int rank,String mentor,int date)
	{
	super(name,salary,branch,rank);
	this.mentor=mentor;
	this.date=date;
	}
	public void work()
	{
	System.out.println("\nEmployee name is : "+name+"\nEmployee Salary is : "+salary+"\nEmpolyee Branch is : "+branch+"\nEmployee rank is : "+rank+"\nmentor Name is :  "+mentor+"\nJoining Date is : "+date);
	}

	public void date()
	{
	System.out.println("\nThis Call Was Made from inside subclass Junior Developer");
	}
}
class Intern extends Employee
{
	String collage;
	int period;
	public Intern(String name,int salary,String collage,int period)
	{
	super(name,salary);
	this.collage=collage;
	this.period=period;
	}
	public void work()
	{
	System.out.println("\nName is : "+name+"\nSalary is : "+salary+"\ncollage is : "+collage+" \nPeriod of intership is (months) : "+period);
	}
	public void  collage()
	{
	System.out.println("\n Call Made From Inside subclass Intern\n"+collage);
	}
	}
	
public class Polymorphism
{
public static void main(String args[])
{
	Scanner scanner=new Scanner(System.in);
	int ch;
	
	do{
	System.out.println("\n1]Employee\n2]Manager\n3]Developer\n4]Senior Manager\n5]Junior Developer\n6]Intern\n7]EXIT");
	System.out.print("Enter Choice : ");
	ch=scanner.nextInt();
	System.out.print("\n");
	switch (ch)
	{
	case 4:
	{
	System.out.println("ENTER SENIOR MANAGER DETAILS \n");
	System.out.print("Enter Name : ");
	String x11=scanner.nextLine();
	String s1=scanner.nextLine();
	
	System.out.print("Enter Salary : ");
	int i1=scanner.nextInt();
	
	System.out.print("Enter Department : ");
	String x1=scanner.nextLine();
	String s2=scanner.nextLine();
	
	System.out.print("Enter Manager id : ");
	int i2=scanner.nextInt();
	
	System.out.print("Enter Assistent : ");
	String x2=scanner.nextLine();
	String s3=scanner.nextLine();
	
	System.out.print("Enter Bonus Amount: ");
	int i3=scanner.nextInt();
	
	SeniorManager S1=new SeniorManager(s1,i1,s2,i2,s3,i3);
	S1.work();
	S1.bonus();
	break;
	}
	case 5:
	{
	System.out.println("ENTER JUNIOR DEVELOPER DETAILS \n");
	System.out.print("Enter Name : ");
		String x8=scanner.nextLine();
	String s4=scanner.nextLine();
	
	System.out.print("Enter Salary : ");
	int i4 =scanner.nextInt();
	
	System.out.print("Enter Branch : ");
		String x9=scanner.nextLine();
	String s5=scanner.nextLine();
	
	System.out.print("Enter Rank : ");
	int i5=scanner.nextInt();
	
	System.out.print("Enter Mentor Name : ");
		String x10=scanner.nextLine();
	String s6=scanner.nextLine();
	
	System.out.print("Enter Date of Joining : ");
	int i6=scanner.nextInt();
	
	
	
	JuniorDeveloper J1=new JuniorDeveloper(s4,i4,s5,i5,s6,i6);
	J1.work();
	J1.date();
	break;
	}
	case 6:
	{
	System.out.println("ENTER INTERN DETAILS \n");
	System.out.print("Enter Name : ");
	String x3=scanner.nextLine();
	String s7=scanner.nextLine();
	
	System.out.print("Enter Salary : ");
	int i7 =scanner.nextInt();
	
	System.out.print("Enter Collage : ");
	String x5=scanner.nextLine();
	String s8=scanner.nextLine();
	
	System.out.print("Enter Internship period : ");
	int i8=scanner.nextInt();
	
	
	
	Intern I1=new Intern(s7,i7,s8,i8);
	I1.work();
	I1.collage();
	break;
	}
	}
	}while(ch!=7);
}
}
