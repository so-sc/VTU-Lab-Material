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
	staff(String sid,String Name,String Phn,int sal)
	{
		staffid=sid;
		name=Name;
		phn=Phn;
		salary=sal;
	}
	void display()
	{
		System.out.print(staffid+"\t"+name+"\t"+phn+"\t"+salary+"\t");
	}
}
class teaching extends staff
{
	String domain,publication;
	teaching(String staffid,String name,String phn,int salary,String Domain,String pub)
	{
		super(staffid,name,phn,salary);
		domain=Domain;
		publication=pub;
	}
	void display()
	{
		System.out.print("\nTeaching:\t");
		super.display();
		System.out.print(domain+"\t"+publication+"\t\t****\t****");
	}
}
class technical extends staff
{
	String skill;
	technical(String staffid,String name,String phn,int salary,String Skill)
   	 {
		super(staffid,name,phn,salary);
		skill=Skill;
     	}
	void display()
	{
		System.out.print("\nTechnical:\t");
		super.display();
	    	System.out.print("****\t****\t\t"+skill+"\t****");
	}
}
class contract extends staff
{
	String period;
	contract(String staffid,String name,String phn,int salary,String Period)
	{
		super(staffid,name,phn,salary);
		period=Period;
	}
	void display()
	{
		System.out.print("\nContract:\t");
		super.display();
		System.out.print("****\t****\t\t****\t"+period);
	}
}
public class P02a{
	public static void main(String[] args) 
{
		staff[] s=new staff[3];
		s[0]=new teaching("1111","Ram","9999999999",50000,"CSE","Manthan");
    		s[1]=new technical("2222","Raj","8888888888",15000,"Java");
   	 	s[2]=new contract("3333","Adithi","7777777777",10000,"10");
        System.out.print("\t\tStaffId\tName\tPhone No\tSalary\tDomain\tPublication\tSkills\t Period");
        System.out.print("\n----------------------------------------------------------------------------------------------");
   		for(int i=0;i<3;i++)
    		{
    			s[i].display();
    			System.out.println();
    		}
	}

}
