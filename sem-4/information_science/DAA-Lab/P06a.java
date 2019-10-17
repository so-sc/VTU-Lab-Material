/*

6. Implement in Java, the 0/1 Knapsack problem using
(a) Dynamic Programming method

*/

import java.util.Scanner;
class knapsackDP 
{
	public void solve(int[] wt, int[] val, int W, int N)
	{
		int i,j;
		int[][] sol = new int[N + 1][W + 1];
		for ( i = 0; i <= N; i++)
		{
			for ( j = 0; j <= W; j++)
			{
				if(i==0||j==0)
					sol[i][j]=0;
				else if(wt[i]>j)
					sol[i][j]=sol[i-1][j];
				else
					sol[i][j]=Math.max((sol[i-1][j]), (sol[i - 1][j - wt[i]] + val[i]));
			}
		}
		System.out.println("The optimal solution is "+sol[N][W]);
		int[] selected = new int[N + 1];
		for(i=0;i<N+1;i++)
			selected[i]=0;
		i=N;
		j=W;
		while (i>0&&j>0)
		{
			if (sol[i][j] !=sol[i-1][j])
			{
				selected[i] = 1;
				j = j - wt[i];
			}
			i--;
		}
		System.out.println("\nItems selected : ");
		for ( i = 1; i < N + 1; i++)
			if (selected[i] == 1)
				System.out.print(i +" ");
		System.out.println();
	}
}
public class P06a 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		knapsackDP ks = new knapsackDP();
		System.out.println("Enter number of elements ");
		int n = scan.nextInt();
		int[] wt = new int[n + 1];
		int[] val = new int[n + 1];
		System.out.println("\nEnter weight of "+ n +" elements");
		for (int i = 1; i <= n; i++)
			wt[i] = scan.nextInt();
		System.out.println("\nEnter values of "+ n +" elements");
		for (int i = 1; i <= n; i++)
			val[i] = scan.nextInt();
		System.out.println("\nEnter knapsack capacity ");
		int W = scan.nextInt();
		ks.solve(wt, val, W, n);
	}
}
