/*
3. a. Write a Java program to read two integers a and b. Compute a/b and print, when b is not zero.
Raise an exception when b is equal to zero.
*/import java.util.Scanner;
public class p03a 
{
	public static void main(String[] args) 
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter two numbers");
		int a=in.nextInt();
		int b=in.nextInt();
		try
		{
			if(b==0)
				throw new ArithmeticException("Devide by 0 error");
			int result=a/b;
			System.out.println(a + "/" + b + "=" + result);
		}
		catch(ArithmeticException e)
		{
			System.out.println("Raised exception is " + e);
		}
		finally
		{
			System.out.println("Execution Finished");
		}
	}

}
