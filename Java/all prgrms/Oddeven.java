import java.util.Scanner;
public class Oddeven{
  public static void main(String[] args){
  int n,evencount=0,oddcount=0,zero=0,i;
  Scanner scanner=new Scanner(System.in);
  System.out.print("Enter the number of elements in the array:");
  n=scanner.nextInt();
  int[] numbers=new int[n];
  System.out.print("Enter the elements of the array:\n");
  for(i=0;i<n;i++){
  numbers[i]=scanner.nextInt();}
  for(i=0;i<n;i++){
  if((numbers[i]%2==0)&&(numbers[i]!=0)){
  evencount++;
  }
  else if(numbers[i]%2!=0)
  {
  oddcount++;
  }
  else 
  zero=zero+1;
  }
  System.out.print("Number of even numbers:"+evencount);
  System.out.print("\nNumber of odd numbers:"+oddcount);
    System.out.print("\nNumber of zero :"+zero);
  scanner.close();
  }}

  
