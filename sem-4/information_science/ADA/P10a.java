/*
    
10. Write Java programs to 
a. Implement All-Pairs Shortest Paths problem using Floyd's algorithm.

*/ 

import java.util.Scanner;
class Floyd
{
	void flyd(int[][]w,int n)
	{
		int i,j,k;
		for(k=1;k<=n;k++)
			for(i=1;i<=n;i++)
				for(j=1;j<=n;j++)
					w[i][j]=Math.min(w[i][j],w[i][k]+w[k][j]);
	}
}
public class P10a
{
	public static void main(String[] args)
	{
		int a[][]=new int[10][10];
		int n,i,j;
		System.out.println("enter the number of vertices");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		System.out.println("Enterthe weighted matrix");
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				a[i][j]=sc.nextInt();
		Floyd f=new Floyd();
		f.flyd(a,n);
		System.out.println("The shortest path matrix is");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				System.out.print(a[i][j]+" ");
			}
			System.out.println();
		}
		sc.close();
	}
}
