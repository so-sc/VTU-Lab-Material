/*

2b. Write a Java class called Customer  to store their name and date_of_birth. The date_of_birth format should be dd/mm/yyyy. Write methods to read customer data as <name, dd/mm/yyyy> and display as <name, dd, mm, yyyy> using StringTokenizer class considering the delimiter character as “/”.

*/
import java.util.Scanner;
import java.util.StringTokenizer;
class Customer
{
	String cname;
	String DOB;
	void readData()
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the customer name");
		cname=in.nextLine();
		System.out.println("Enter the Date of Birth");
		DOB=in.next();	
	}
	void display()
	{
		StringTokenizer st=new StringTokenizer(DOB,"/");
		System.out.print(cname);
		while(st.hasMoreTokens())
		{
			System.out.print(", "+st.nextToken());
		}
	}
}
public class P02b 
{
	public static void main(String[] args) 
	{
		Customer c=new Customer();
		c.readData();
		c.display();

	}

}
