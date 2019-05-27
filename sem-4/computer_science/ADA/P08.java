/*

8. Find Minimum Cost Spanning Tree of a given connected undirected graph using Kruskal's algorithm. 
Use Union-Find algorithms in your program.

*/

import java.util.Scanner;
class Krushkal
{
	int kruskals(int n,  int cost[][]) 
	{
		int k = 1, a = 0, u = 0, b = 0, v = 0, min, mincost = 0;
		int parent[] = new int[10];
		while (k < n) 
		{
			min = 999;
			for (int i = 1; i <= n; i++) 
			{
				for (int j = 1; j <= n; j++) 
				{
					if (cost[i][j] < min) 
					{
						min = cost[i][j];
						a = u = i;
						b = v = j;
					}
				}
			}
			while (parent[u] > 0)
				u = parent[u];
			while (parent[v] > 0)
				v = parent[v];
			if (u != v) 
			{
				System.out.println((k++) + ">minimum edge is :");
				System.out.println("(" + a + "," + b + 
						") and its cost is:" + min);
				mincost += min;
				parent[v] = u;
			}
			cost[a][b] = cost[b][a] = 999;
		}
		return mincost;
	}
}



public class P08 
{
	public static void main(String[] args) 
	{
		int cost[][] = new int[10][10];
		int i, j, mincost = 0;
		Scanner in = new Scanner(System.in);
		
System.out.println("Enter the number of nodes: ");
		int n = in.nextInt();
		System.out.println("Enter the cost matrix");
		for (i = 1; i <= n; i++) 
		{
			for (j = 1; j <= n; j++) 
			{
				cost[i][j] = in.nextInt();
			}
		}
		System.out.println("The entered cost matrix is");
		for (i = 1; i <= n; i++) 
		{
			for (j = 1; j <= n; j++) 
			{
				System.out.print(cost[i][j] + "\t");
			}
			System.out.println();
		}
		Krushkal k=new Krushkal();
		mincost = k.kruskals(n, cost);
		System.out.println("The minimum spanning tree cost is:");
		System.out.println(mincost);
	}
}

