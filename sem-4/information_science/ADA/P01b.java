/*

b. Write a Java program to implement the Stack using arrays.
Write Push(), Pop(), and Display() methods to demonstrate its working.

File name has to be Stack.java 
*/
import java.util.Scanner;
class Stack
{
	int top=-1;
	final int max=5;
	int s[]=new int[max]; 
	Scanner sc=new Scanner(System.in);
	void push()
	{	
	if(top>=max-1) System.out.println("Stack overflow");
	else
	{ 
		System.out.println("Enter the element");
		int elem = sc.nextInt();
		s[++top]=elem;
	}
	}
	void pop()
	{
		if(top==-1) System.out.println("Stack Underflow");
		else System.out.println("Popped element : "+s[top--]);
		
	}
	void display()
	{
		if(top==-1) System.out.println("Stack is empty");
		else
		{
			System.out.println("Stack elements are:");
			for(int i=top; i>=0; i--)
				System.out.println(s[i]);
		}
	}
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		Stack obj=new Stack();
		while(true)
		{
			System.out.println("\n-----------Menu------------");
			System.out.println("1.Push\t2.Pop\t3.Display");
			System.out.println("---------------------------");
			System.out.println("Enter your choice");
			int ch = in.nextInt();
			switch(ch)
			{
				case 1:obj.push(); break;
				case 2:obj.pop(); break;
				case 3:obj.display(); break;
				default:System.out.println("Invalid choice");
					return;
			
			}			
		}
    }
}

