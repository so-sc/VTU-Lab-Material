/*To implement user-defined function for string functions*/

#include<stdio.h>

int slen(char s[])
{
	/*To compute the string length*/
	
	int i, len = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	
	return len;
}

int scomp(char s1[], char s2[])
{
	/*To check and compare the strings*/
	
	int i, j;
	
	if(slen(s1) != slen(s2))
	{
		return 0;
	}
	
	for(i=0; s1[i] != '\0'; i++)
	{
		if(s1[i] != s2[i])
		{
			return 0;
		}
	}
	
	return 1;
}

int scat(char s1[], char s2[])
{
	/*To concatenate 2 strings*/	
	
	int i, j;
	
	for(i = slen(s1), j=0; s2[j] != '\0'; i++, j++)
	{
		s1[i] = s2[j];
	}
	
	//Assigning last element of string as null, to indicate end of string
	s1[i] = '\0';
	
	return 0;
}

int main()
{
	char s1[200], s2[200];
	
	//using gets() is fine as long as newline character(enter key) is pressed. 
	printf("Enter String 1:");
	gets(s1);
	printf("Enter String 2:");
	gets(s2);
	
	printf("\nLength of String 1: %d", slen(s1));
	printf("\nLength of String 2: %d", slen(s2));
	
	//Comparing s1, s2
	if(scomp(s1, s2))
	{
		printf("\nThe strings '%s', '%s' are equal.", s1, s2);
	}
	else
	{
		printf("\nThe strings '%s', '%s' are not equal.", s1, s2);
	}
	
	//Concatinating s1, s2
	scat(s1, s2);
	
	printf("\nThe concatenated string is: %s\n", s1);
	
	return 0;

}
