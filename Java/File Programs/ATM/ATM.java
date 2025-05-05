import java.util.Scanner;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.*;

public class ATM
{
    public static void main(String args[])
    {
        Scanner scanner=new Scanner(System.in);
        Data d1=new Data();

        int choice;
        do 
        {
        System.out.print("\n\n\t\tSTATE BANK OF INDIA\n\n\t\t[1]Deposit\n\t\t[2]Withdraw\n\t\t[3]Transfer\n\t\t[4]Display\n\t\t[5]Exit\n\nEnter Choice : ");
        choice=scanner.nextInt();
        switch (choice)
        {
            case (1) :
                {
                    d1.depositMethod();
                    d1.writeMethod();
                    break;
                }
            
            case (2) :
                {
                    d1.withdrawMethod();
                    d1.writeMethod();
                    break;
                }
            case (3) :
                {
                    d1.transferMethod();
                    d1.writeMethod();
                    break;
                }
            case (4) :
                {
                    d1.display();
                    break;
                }
        }

        }while(choice!=5);

    }
}

class Data 
{

Scanner scanner=new Scanner(System.in);

int balanceAmount=0;
String accountNumber;

public Data()
{
System.out.print("\n\n\t\tSTATE BANK OF INDIA\n\nEnter Account Number : ");
accountNumber=scanner.nextLine();
}

public void depositMethod()
{
    System.out.print("Enter Deposit Amount : ");
    int depositAmount=scanner.nextInt();
    balanceAmount=balanceAmount+depositAmount;
 
}

public void withdrawMethod()
{
    System.out.print("Enter Withdraw Amount : ");
    int withdrawAmount=scanner.nextInt();
    try                                                         
    {                                                               //the line after try catch will still work if an exception occurs.
        if(withdrawAmount>balanceAmount)                            //to prevent that use it inside try itself.
        {
        throw new Exception("USER HAS INSUFFICIENT FUNDS");
        }
         balanceAmount=balanceAmount-withdrawAmount;
    }

    catch(Exception e)
    {
    System.out.println("Exception : "+e);
    }

   
        
}

public void transferMethod()
{
    System.out.print("Enter The Receiver Account Number : ");
    String accountNumberBUFFERERROR=scanner.nextLine();
    String accountNumber2=scanner.nextLine();

    System.out.print("Enter Withdraw Amount : ");
    int transferAmount=scanner.nextInt();

    try
    {
        if(transferAmount>balanceAmount)
        {
            throw new Exception("Invalid Funds to transfer");
        }
            FileReader fileReader =null;   
            FileWriter fileWriter2 =null;          //this initiallization is necessary when closed in finally.
            Scanner sc = null ;
            try
            {
             fileReader=new FileReader(accountNumber2+".txt");
             sc =new Scanner(fileReader);
             int balance2=0;
             while(sc.hasNextInt())
             {
                balance2=sc.nextInt();
             }
             balance2=balance2+transferAmount;
             balanceAmount=balanceAmount-transferAmount;  
             fileWriter2=new FileWriter(accountNumber2+".txt");
             fileWriter2.write(Integer.toString(balance2)); 
            }

            catch (IOException e)
            {
                System.out.println("Exception : "+e);
            }

            finally
            {
                try 
                {
                    if(fileReader!=null)
                    {
                    fileReader.close();
                    }
                    if(fileWriter2!=null)
                    {
                        fileWriter2.close();
                    }
                    if(sc!=null)
                    {
                    sc.close();
                    }
                }
                catch (IOException e)
                {
                    System.out.println("Exception : "+e);
                }
            }

    }
    catch(Exception e)
    {
        System.out.println("Exception : "+e);
    }


}


public void writeMethod() 
{
FileWriter fileWriter=null; //this step is mandatory if the closing is done inside finally.
try
{
fileWriter = new FileWriter(accountNumber+".txt");
fileWriter.write(Integer.toString(balanceAmount));
}

catch(Exception e)
{
    System.out.println("Exception : "+e);
}

finally
{
    
        try
        {
            fileWriter.close();
        }
        catch(IOException e)
        {
           System.out.println("Exception : "+e); 
        }

}

}

public void display()
{
    System.out.print("Balance Amount is "+balanceAmount);
}



}
