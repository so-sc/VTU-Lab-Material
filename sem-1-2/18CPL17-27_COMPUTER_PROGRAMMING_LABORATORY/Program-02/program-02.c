/*To compute roots of quadratic equation*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a, b, c, d, r1, r2, r, i;	
	
	printf("Enter the coefficients of x: ");
	scanf("%f%f%f", &a, &b, &c);
	
	// if a = 0 and b = 0 it is not possible to find roots.
	if(a==0 && b==0)
	{
		printf("Roots cannot be determined!\n");
		exit(0);
	}
	
	if(a==0)
	{
		r1 = -c/b;
		printf("Linear Equation:\n");
		printf("Root is: %f", r1);
	}
	
	d = b*b - 4*a*c;
	
	if(d == 0)
	{
		r1 = -b/2*a;
		r2 = r1;
		printf("The roots are real and equal:\nRoot 1: %f\tRoot 2: %f\n", r1, r2);
	}
	
	else if(d>0)
	{
		r1 = (-b + sqrt(d))/2*a;
		r2 = (-b - sqrt(d))/2*a;
		printf("Roots are real and distinct:\n");
		printf("Root 1: %f\tRoot 2: %f\n", r1, r2);
	}
	
	else
	{
		r = -b/2*a;
		i = sqrt(fabs(d))/2*a;
		printf("The roots are imaginary:\n");
		
		//Manipulate output syntax to display imaginary parts
		printf("Root 1: %f + i(%f)\t", r, i);
		printf("Root 2: %f - i(%f)\t\n", r, i);
	}
	
	return 0;
}

