import java.util.Scanner;
class Animal
{
String name;
int age;
Scanner scanner=new Scanner(System.in);

public Animal()
{
System.out.println("Enter Animal Name .");
name = scanner.nextLine();

System.out.println("Enter Animal Age .");
age = scanner.nextInt();
}

public void display()
{
System.out.println("Animal Name : "+name);
System.out.println("Animal Age  : "+age);
}
}

class Herbivore extends Animal
{
Scanner scanner=new Scanner(System.in);
String type;
public Herbivore()
{
super();

System.out.println("Enter Type Of Animal ");
type = scanner.nextLine();
}

public void display()
{
super.display();
System.out.println("Enter Animal Type : "+type);
}
}





class Carnivore extends Animal
{
Scanner scanner=new Scanner(System.in);
String type;
public Carnivore()
{
super();


System.out.println("Enter Type Of Animal ");
type = scanner.nextLine();
}

public void display()
{
super.display();
System.out.println("Enter Animal Type : "+type);
}
}

public class Week3two
{
public static void main(String args[])
{

Herbivore h1=new Herbivore();

Carnivore c1=new Carnivore();

h1.display();

c1.display();



}
}


