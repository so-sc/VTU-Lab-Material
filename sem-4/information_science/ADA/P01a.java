/*
1) a) Create a Java class called Student with the following details as variables within it.
(i) USN
(ii) Name
(iii) Branch
(iv) Phone 
Write a Java program to create n Student objects
and print the USN, Name, Branch, and Phone of these objects with suitable headings.
*/

/*File name has to be Student */
import java.util.Scanner;

class Student{
    String usn;
    String name;
    String branch;
    long phone;
    void read(String Usn,  String Name,  String Branch,  long Phone)
    {
        usn=Usn;
        name=Name;
        branch=Branch;
        phone=Phone;
    }
    
    void display()
    {
        System.out.println("USN : "+usn+"\tName : "+name+"\tBranch : "+branch+"\tPhone Number : "+phone);
    }
    public static void main( String args[])
    {
         Student s[]=new Student[100];
         Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of students");
        final int n=sc.nextInt();
        for(int i=0;i<n;i++) s[i]=new Student();
        for (int i=0;i<n;i++) 
       {
       System.out.println("Enter usn");
        String usn=sc.next();
       System.out.println("Enter name");
        String name=sc.next();
       System.out.println("Enter branch");
        String branch=sc.next();
       System.out.println("Enter phone number");
        long phone=sc.nextLong();
        s[i].read(usn,name,branch,phone);
       }
       for (int i=0;i<n;i++) s[i].display();
    }

}
