/*Program to find square root of a number without sqrt(n)*/

#include<stdio.h>

int main()
{
	float x, n;
	int i;
	
	printf("Enter the number:");
	scanf("%f", &n);
	
	// storing back-up
	x = n; 
	
	//Compute square root using newton-raphson method
	for(i = 0; i<10 ; i++)
	{
		x = (x*x + n)/(2*x);
	}
	
	//Display Square root
	printf("The square root of number %f = %f\n", n, x);
	
	
}
