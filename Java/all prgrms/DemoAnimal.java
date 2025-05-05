import java.util.Scanner;
class Animal
{
String name;
int age;
Scanner scanner=new Scanner(System.in);

public Animal(String name,int age)
{

this.name = name;
this.age= age;
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
public Herbivore(String name,int age,String type)
{
super(name,age);

this.type = type;
}

public void display()
{
super.display();
System.out.println("Enter Animal Type : "+type);
}
}





class Carnivore extends Animal
{
String type;
Scanner scanner=new Scanner(System.in);
public Carnivore(String name,int age,String type)
{

super(name,age);
this.type = type;
}

public void display()
{
super.display();
System.out.println("Enter Animal Type : "+type);
}
}

public class DemoAnimal
{
public static void main(String args[])
{

Scanner scanner=new Scanner(System.in);

System.out.println("Enter Animal Name .");
String name = scanner.nextLine();
System.out.println();

System.out.println("Enter Animal Age .");
int age = scanner.nextInt();
System.out.println();

System.out.println("Enter Type Of Animal ");
String type3 = scanner.nextLine();
String type = scanner.nextLine();
System.out.println();

Herbivore h1=new Herbivore(name,age,type);

System.out.println("Enter Animal Name .");
String name1 = scanner.nextLine();
System.out.println();

System.out.println("Enter Animal Age .");
int age1 = scanner.nextInt();
System.out.println();

System.out.println("Enter Type Of Animal ");
String type2 = scanner.nextLine();
String type1 = scanner.nextLine();
System.out.println();

Carnivore c1=new Carnivore(name1,age1,type1);

h1.display();
System.out.println();
c1.display();



}
}


