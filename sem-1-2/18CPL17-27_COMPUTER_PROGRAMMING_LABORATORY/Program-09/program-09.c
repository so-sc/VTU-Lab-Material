/*To compute sin x using taylor series approximation*/

#include<stdio.h>
#include<math.h> // Just for comparision between results

int main()
{
	int n, i;
	float x, term, sum = 0;
	
	printf("Enter the value in degrees: ");
	scanf("%f", &x);
	
	printf("Enter the number of terms in Taylor series expansion: ");
	scanf("%d", &n);
	
	
	// Convert to radians
	x = (x * 3.141592)/180;
	term = x;
	sum = x;
	
	for(i = 1; i<10; i++)
	{
		//Term closest to approximation.
		term = (-term*x*x)/(2*i*(2*i + 1));
				
		//same as sum = sum + term;
		sum += term;
	}
	
	printf("Calculated = %f\n", sum);
	printf("Builtin function = %f\n", sin(x)); 
	
	return 0;
}
