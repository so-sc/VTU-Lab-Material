/*To implement functions to check if a number is prime or not*/

#include<stdio.h>

int isprime(int n)
{
	/*
		Function that returns
		0 --> when n is not a prime
		1 --> when n is a prime
	*/
	
	int i;
	if(n == 1 || n == 0)
	{
		return 0;
	}
	
	/*Check only till n/2 because numbers > n/2 will never divide n*/
	for(i = 2; i<n/2; i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int f, n; //Works only for small integers, i.e n<32767
		
	printf("Enter the number: ");
	scanf("%d", &n);
	
	//Assigning f as 0 or 1
	f = isprime(n);
	
	
	//Same as if(f == 1)
	if(f)
	{
		printf("%d is a prime.\n", n);
	}
	else
	{
		printf("%d is not a prime.\n", n);
	}
	return 0;
}
