#include <stdio.h>
void main()
{
	int num, rev=0, temp, rem;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp = num;
	while (temp!=0)
	{
		rem = temp % 10;
		temp = temp / 10;
		rev = rev * 10 + rem;
	}
	if(rev == num)
	{
		printf("Is a palindrome: %d\n", num);
	}else
		{
			printf("Not a palindrome\n");
		}
}