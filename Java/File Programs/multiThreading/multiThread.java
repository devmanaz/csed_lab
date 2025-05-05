class Display extends Thread
{
	public synchronized void display(int n)
	{
		try
		{
	 		System.out.println(n);
	 		Thread.sleep(1500);
	 		System.out.println(n);
		}
		catch (Exception e)
		{
			System.out.println("Exception Occurred");
		}
	}
}

class odd extends Thread
{
	int i;
	Display d;
	
	public odd(Display d)
	{
		this.d = d;
		
	}
	
	public void run()
	{
		for(i=1;i<=20;i=i+2)
		{
		  d.display(i);
		}
		System.out.println("\nExiting ODD thread\n");
	}
}

class even extends Thread
{
	int i;
	Display d;
	
	public even(Display d)
	{
		this.d = d;
	
	}
	
	public void run()
	{
		for(i=2;i<=20;i=i+2)
		{
		  d.display(i);
		}
		System.out.println("\nExiting EVEN thread\n");
	}
}

public class multiThread
{
 public static void main(String args[])
 {
 	Display d1 = new Display();
 	
 	even e1 = new even(d1);
 	odd o1 = new odd(d1);
 	
 	Thread t1 = new Thread(e1);
 	Thread t2 = new Thread(o1);
 	
 	t2.start();
 	t1.start();
 }
 }
 	
 	
 
 
 
	
	
	

