import java.util.*;
import java.io.*;

public class Encrypt
{
public static void main(String args[])throws IOException
{
int i,key=0;

FileReader reader =new FileReader("File1.txt");
FileWriter writer = new FileWriter("File2.txt");

Scanner scanner = new Scanner(System.in);

System.out.println("Enter The Key : ");
key = scanner.nextInt();

while((i=reader.read())!=-1)
{
char e=(char)(i+key);
writer.write(e);
}

reader.close();
writer.close();

}

}
