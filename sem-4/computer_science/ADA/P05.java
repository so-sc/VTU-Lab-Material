/*

5. Sort a given set of n integer elements using Merge Sort method and compute its time complexity.
Run the program for varied values of n> 5000, and record the time taken to sort. 
Plot a graph of the time taken versus n on graph sheet. The elements can be read from a file or can be generated using the random number generator. 
Demonstrate using Java how the divide and- conquer method works along with its time complexity analysis: worst case, average case and best case.

*/

import java.util.Random;
import java.util.Scanner;
class MergeSort
{
	static int max=10000;
	void merge( int[] array,int low, int mid,int high)
	{
		int i=low;
		int j=mid+1;
		int k=low;
		int[] resarray=new int[max];
		while(i<=mid&&j<=high)
		{
			if(array[i]<array[j])
			{
				resarray[k]=array[i];
				i++;
				k++;
			}
			else
			{
				resarray[k]=array[j];
				j++;
				k++;
			}
		}
		while(i<=mid)
			resarray[k++]=array[i++];
		while(j<=high)
			resarray[k++]=array[j++];
		for(int m=low;m<=high;m++)
			array[m]=resarray[m];
	}
	void mergeSort( int[] array,int low,int high)
	{
		if(low<high)
		{
			int mid=(low+high)/2;
			mergeSort(array,low,mid);
			mergeSort(array,mid+1,high);
			merge(array,low,mid,high);
		}
	}
}
public class P05 
{
	public static void main(String[] args) 
	{
		int i,n=0;
		Scanner in = new Scanner(System.in);
		MergeSort obj=new MergeSort();
		int[] a=new int[10000];
		
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
		
		obj.mergeSort(a,0,n-1);
		long end=System.nanoTime();

		System.out.println("\n\nThe sorted elements are");
		for(i=0; i<n; i++)
			System.out.print(a[i]+" ");
        System.out.println("\n\nThe time taken to sort elements by merge sort method is "+(end-start)+" nano seconds");
	}
}
