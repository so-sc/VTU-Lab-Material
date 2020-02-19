/*
1) a) Create a Java class called Student with the following details as variables within it.
(i) USN
(ii) Name
(iii) Branch
(iv) Phone 
Write a Java program to create n Student objects
and print the USN, Name, Branch, and Phone of these objects with suitable headings.
*/
import java.util.Scanner;
class Student
{
	String USN;
	String name;
	String branch;
	String phone;
	public void getInfo()
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the USN:");
		USN=in.next();
		System.out.println("Enter the Name:");
		name=in.next();
		System.out.println("Enter the Branch:");
		branch=in.next();
		System.out.println("Enter the Phone No:");
		phone=in.next();
	}
	public void display()
	{
		System.out.println(USN+"\t"+name+"\t"+branch+"\t\t"+phone);
	}
}
public class P01a{
	public static void main(String[] args) 
	{
		int i;
		Student[] S=new Student[100];
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the number of students");
		int n=in.nextInt();
		System.out.println("Enter the Student details");
		for(i=0;i<n;i++)
		{
			S[i]=new Student();
			S[i].getInfo();
		}
		System.out.println("USN\t\tName\tBranch\tPhone");
		System.out.println("........................................");
		for(i=0;i<n;i++)
		{
			S[i].display();
		}
	}
}
