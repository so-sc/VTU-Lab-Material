/*

b. Write a Java program that implements a multi-thread application that has three threads. 
First thread generates a random integer for every 1 second; 
second thread computes the square of the number and prints; 
third thread will print the value of cube of the number.

*/
import java.util.Random;
class RandomNumThread extends Thread 
{
	Random rand = new Random();
	public void run() 
	{
		try
		{
			for(int i=0;i<10;i++)
			{
				System.out.println("Number generated is " + rand.nextInt(100)+" ");
				Thread.sleep(1000);
			} 
		}
		catch (InterruptedException e) 
		{
			e.printStackTrace();
		}
	}
}
class SquareNum extends Thread 
{
	int num;
	
	SquareNum(int a) 
	{
		num = a;
	}
	public void run() 
	{
		for(int i=1;i<num;i++)
			System.out.println("Square of "+ i + " is:" + i*i);
	}
}
class CubeNum extends Thread 
{
	int n;
	CubeNum(int a) 
	{
		n = a;
	}
	public void run()
	{
		for(int i=1;i<10;i++)
			System.out.println("Cube of "+ i +" is:" + i*i*i);
	}
	
}
public class P03b 
{
	public static void main(String[] args) 
	{
		Thread thread1 = new RandomNumThread();
		thread1.start();
		Thread thread2 = new SquareNum(10);
		thread2.start();
		Thread thread3 = new CubeNum(10);
		thread3.start();
	}
}
