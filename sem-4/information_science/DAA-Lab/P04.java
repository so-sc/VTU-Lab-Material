/*

4. Sort a given set of n integer elements using Quick Sort method and compute its time complexity. 
Run the program for varied values of n> 5000 and record the time taken to sort.
Plot a graph of the time taken versus n on graph sheet. 
The elements can be read from a file or can be generated using the random number generator.
Demonstrate using Java how the divide and-conquer method works along with its time complexity analysis: worst case, average case and best case.

*/

import java.util.Random;
import java.util.Scanner;
class QuickSort
{
	int partition (int[] a, int low,int high)
	{
		int p,i,j,temp;
		p=a[low];
		i=low+1;
		j=high;
		while(low<high)
		{
			while(a[i]<=p&&i<high)
				i++;
			while(a[j]>p)
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			else
			{
				temp=a[low];
				a[low]=a[j];
				a[j]=temp;
				return j;
				
			}
		}
		return j;
	}
	void sort(int[] a,int low,int high)
	{
		if(low<high)
		{
			int pos=partition(a,low,high);
			sort(a,low,pos-1);
			sort(a,pos+1,high);
		}
	}
}
public class P04 
{
	public static void main(String[] args) 
	{
		int i,n=0;
		Scanner in = new Scanner(System.in);
		int[] a=new int[10000];
		QuickSort obj=new QuickSort();
System.out.println("Press 1 to read numbers from the keyboard\nPress 2 to generate random numbers\nEnter your choice:");
		int choice = in.nextInt();
		switch(choice)
		{
			case 1:System.out.println("Enter the number of elements to be sorted");
				   n = in.nextInt();
				   System.out.println("Enter "+n+" numbers");
				   for(i=0;i<n;i++)
				   {
						a[i]=in.nextInt();
				   }
				   break;
			case 2:System.out.println("Enter the number of elements to be sorted");
				   n = in.nextInt();
				   Random rand= new Random();
				   for(i=0;i<n;i++)
				   {
						a[i]=rand.nextInt(1000);
				   }
				   break;
			default:System.out.println("Wrong Choice");
					System.exit(0);
		}
		System.out.println("\nArray elements to be sorted are");
		for(i=0; i<n; i++)
			System.out.print(a[i]+" ");
		
		long start=System.nanoTime();
		obj.sort(a,0,n-1);
		long end=System.nanoTime();

		System.out.println("\n\nThe sorted elements are");
		for(i=0; i<n; i++)
			System.out.print(a[i]+" ");
System.out.println("\n\nThe time taken to sort elemets by quick sort method is "+(end-start)+" nano seconds");
	}
}

