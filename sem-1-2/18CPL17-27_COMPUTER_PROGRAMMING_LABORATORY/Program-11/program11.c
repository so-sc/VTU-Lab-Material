/*Program to implement bubble sort*/

#include<stdio.h>

int main()
{
	int a[100], n, i, j, t;
	
	printf("\nEnter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the array: \n");
	for(i = 0; i<n ; i++)
	{
		scanf("%d", &a[i]);
	}	
	
	printf("\nThe given array is: \n");
	for(i = 0; i<n ; i++)
	{
		printf("%d\t", a[i]);
	}
	
	//Bubble sorting
	for(i=1; i<n ; i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j] > a[j+1])
			{
				//Swapping the right adjacent number
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	printf("\nArray after bubble sorting is:\n");
	for(i = 0; i<n ; i++)
	{
		printf("%d\t", a[i]);
	}	
	printf("\n\n"); 
		
	return 0;
}
