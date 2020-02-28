/*
2. a. Design a superclass called Staff  with details as StaffId, Name, Phone, Salary.
Extend this class by writing three subclasses namely Teaching (domain, publications), Technical (skills), and Contract (period). 
Write a Java program to read and display at least 3 staff objects of all three categories.
*/
import java.util.Scanner;
class staff
{
	String staffid;
	String name;
	String phn;
	int salary;
	Scanner sc=new Scanner(System.in);
	void read()
	{
		System.out.println("\nEnter the Staff-id");
		staffid=sc.next();
		System.out.println("Enter the Name");
		name=sc.next();
		System.out.println("Enter the Phone Number");
		phn=sc.next();
		System.out.println("Enter the Salary");
        salary=sc.nextInt();
	}
	void display()
	{
		System.out.print(staffid+"\t\t"+name+"\t"+phn+"\t\t"+salary+"\t");
	}
	public static void main(String[] args) 
	{
		Teaching teach[]=new Teaching[100];
		Technical tech[]=new Technical[100];
		Contract con[]=new Contract[100];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number of Teaching staff");
		int x=sc.nextInt();
		System.out.println("Enter the number of Technical staff");
		int y=sc.nextInt();
		System.out.println("Enter the number of Contract staff");
		int z=sc.nextInt();
		System.out.println("\n-----TEACHING STAFF-----");
		for(int i=0;i<x;i++)
		{
			teach[i]=new Teaching();
			teach[i].read();
		}
		System.out.println("\n-----TECHNICAL STAFF-----");
		for(int i=0;i<y;i++)
		{
			tech[i]=new Technical();
			tech[i].read();
		}
		System.out.println("\n-----CONTRACT STAFF-----");
		for(int i=0;i<z;i++)
		{
			con[i]=new Contract();
			con[i].read();
		}
		
		System.out.println("\n-----TEACHING STAFF-----");
		System.out.println("Staff-id\tName\tPhone Number\tSalary\tDomain\tPublication");
		for(int i=0;i<x;i++) teach[i].display();
		System.out.println("\n-----TECHNICAL STAFF-----");
		System.out.println("Staff-id\tName\tPhone Number\tSalary\tSkill");
		for(int i=0;i<y;i++) tech[i].display();
		System.out.println("\n-----CONTRACT STAFF-----");
		System.out.println("Staff-id\tName\tPhone Number\tSalary\tPeriod");
		for(int i=0;i<z;i++) con[i].display();
	}
}
class Teaching extends staff
{
	String domain,publication;
	void read()
	{
		super.read();
		System.out.println("Enter the Publication");
		publication=sc.next();
		System.out.println("Enter the Domain");
        domain=sc.next();

	}
	void display()
	{
		super.display();
		System.out.println(domain+"\t"+publication+"\t");
	}
}
class Technical extends staff
{
	String skill;
	void read()
	{
		super.read();
		System.out.println("Enter the skill");
		skill=sc.next();
	}
	void display()
	{
		super.display();
	    System.out.println(skill+"\t");
	}
}
class Contract extends staff
{
	int period;
	void read()
	{
		super.read();
		System.out.println("Enter the Period");
		period=sc.nextInt();
	}
	void display()
	{
		super.display();
		System.out.println(period);
	}
}
