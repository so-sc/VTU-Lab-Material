/*To compute product of two matrices by 2D Array manipulation*/

#include<stdio.h>
#include<stdlib.h> //For using exit(0);

int main()
{
	int m1[20][20], m2[20][20], m3[20][20], m, n, p, q, i, j, k;
	
	printf("\nEnter order of Matrix 1: ");
	scanf("%d%d", &m, &n);
	printf("Enter order of Matrix 2: ");
	scanf("%d%d", &p, &q);
	
	if(n == p)
	{
		printf("\nEnter the elements of matrix 1:\n");
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				scanf("%d", &m1[i][j]);
			}
		}
		
		printf("\nEnter the elements of matrix 2:\n");
		for(i=0; i<p; i++)
		{
			for(j=0; j<q; j++)
			{
				scanf("%d", &m2[i][j]);
			}
		}
		
		//Compute product matrix
		
		for(i=0; i<m; i++)
		{	
			for(j=0; j<q; j++)
			{
				m3[i][j] = 0;
				
				for(k=0; k<n; k++)
				{
					m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j];
				}	
			}
		}
		
		
		printf("\nProduct of matrices are: \n");
		
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				printf("%d\t", m3[i][j]);
			}
			
			printf("\n");
		}
			
	}
	else
	{
		printf("\nMatrices are incompatible!, try again.\n\n");
		exit(0);
	}
	
	 
}

