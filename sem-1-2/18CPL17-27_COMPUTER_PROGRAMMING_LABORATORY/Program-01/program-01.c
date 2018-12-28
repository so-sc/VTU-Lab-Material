#include<stdio.h>

int main()
{
	char ch;
	float a, b;
	int x, y;

	printf("\nMenu:\n");
	printf("+ Addition\n- Subtraction\n* Multiplication\n/ Division\n% Remainder\n");
	printf("Enter the symbol for operation: ");
	scanf("%c", &ch);
	printf("Enter the numbers: ");
	scanf("%f%f", &a, &b);
	
	switch(ch)
	{
		case '+': printf("Sum = %f\n", a+b); break;
		case '-': printf("Difference = %f\n", a-b); break;
		case '*': printf("Product = %f\n", a*b); break;
		case '/': if(b!=0)
			 {
			      printf("Quotient = %f\n", a/b); break;
			 }
			else
			 {
				  printf("Cannot divide by zero!!\n");
			 }
		case '%': x=a; y=b; 	  					
			  if(b!=0)
			  {
			      printf("Remainder = %d\n", x%y); break;
			  }
			  else
			  {
			  	  printf("Cannot divide by zero!!\n");
			  }
		default: printf("Invalid operator!!\n");
	}
}

