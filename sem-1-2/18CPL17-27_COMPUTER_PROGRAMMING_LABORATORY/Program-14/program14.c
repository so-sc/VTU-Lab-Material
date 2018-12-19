/*To implement pointers to compute sum, mean and standard deviation*/

#include<stdio.h>
#include<math.h> // Because sqrt() and pow() are used. 

main()
{
	float a[100], *p, sum, mean, sd, res;
	int n, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f", &a[i]);
	} 	
	
	sum = 0;
	res = 0;
	p = a;
	
	for(i=0;i<n;i++)
	{
		sum += *p; //sum = sum + *p;
		p++;
	}
	
	mean = sum/n;
	
	// re-assigning p = a because from previous loop, value of p gets updated.
		p = a; 
	
	// Computing standard deviation 'sd'
	for(i=0;i<n;i++)
	{
		res += pow((*p - mean), 2); // res = res + pow((*p - mean), 2);
		p++;
	}
	
	res /= n; // res = res/n;
	sd = sqrt(res);
	
	printf("Sum = %f", sum);
	printf("\nMean = %f", mean);
	printf("\nStandard deviation = %f\n\n", sd);	
}
