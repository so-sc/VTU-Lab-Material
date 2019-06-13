/*
10 b. Implement Travelling Sales Person problem using Dynamic programming.
*/

import java.util.*;
class Sales
{	
	int cost_opt;
	int a[][]=new int[100][100];
	int visit[]=new int[100];
	void mincost_opt(int city,int n)
	{
		int i,ncity;
		visit[city]=1;
		System.out.print(city+"-->");
		ncity=least_opt(city,n);
		if(ncity==999)
		{
			ncity=1;
			System.out.println(ncity);
			cost_opt+=a[city][ncity];
			return;
		}
		mincost_opt(ncity,n);
	}
	int least_opt(int c,int n)
	{
		int i,nc=999;
		int min=999,kmin=999;
		for(i=1;i<=n;i++)
		{
			if((a[c][i]!=0)&&visit[i]==0)
			if(a[c][i]<min)
			{
				min=a[i][1]+a[c][i];
				kmin=a[c][i];
				nc=i;
			}
		}
		if(min!=999)
			cost_opt+=kmin;
		return nc;
	}
}
public class P10b 
{
	public static void main(String[] args) 
{
		int i,j;
		Sales x=new Sales();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter no of cities:");
		int n=sc.nextInt();
		System.out.println("enter the cost matrix");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				x.a[i][j]=sc.nextInt();
				x.visit[i]=0;
		}
		System.out.println("the cost line is");
		for(i=1;i<=n;i++)
		{	
			for(j=1;j<=n;j++)
				System.out.print(x.a[i][j]+"\t");
			System.out.println();
		}
		System.out.println("optimal solution");
		System.out.println("the path is:");
		x.mincost_opt(1,n);
		System.out.println("minimum cost is "+x.cost_opt);
	}

}
