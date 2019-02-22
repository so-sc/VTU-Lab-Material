#include <stdio.h>
void main()
{
	int num, rev=0, temp, rem;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	temp = num;
	while (temp!=0)
	{
		rem = temp % 10;
		temp = temp / 10;
		rev = rev * 10 + rem;
	}
	
	printf("The reversed number is: %d\n", rev);
	
	if(rev == num)
	{
		printf("Is a palindrome\n\n");
	}else
		{
			printf("It is not a palindrome\n\n");
		}
}
