import java.io.*;
import java.util.*;

public class PrimeFile
{
public static void main(String args[])throws IOException
{


FileReader reader =new FileReader("input.txt");

FileWriter writer = new FileWriter("output.txt");

int item;
int i;

Scanner s=new Scanner(reader);

while(s.hasNextInt())
{
item=s.nextInt();
int flag=0;
	for(i=2;i<item;i++)
	{
		if(item%i==0)
		{
		flag=flag+1;
		}
		
	}
	
if(flag==0&&item!=1)
{
writer.write(item+" ");
}
}


reader.close();
writer.close();
s.close();


}
}





