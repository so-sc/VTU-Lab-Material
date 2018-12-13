//4.) Design, Develop and Implement a Program in C for converting an Infix  Expression to Postfix Expression.
//Program should support for both parenthesized and free parenthesized expressions with the operators:
//+, -, *, /, %(Remainder), ^(Power) and alphanumeric operands.
//Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
//Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.


 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define stacksize 100
int top,pos;
char infix[100],postfix[100],item[stacksize];

void main()
{
	int top=-1;
	printf("Enter the infix expression:\n");
	scanf("%s",infix);
	convert();
	printf("The postfix expression is:%s\n",postfix);
}

void push(char x)
{
	if(top==stacksize-1)
	printf("Overflow\n");
	else
	{
		top++;
		item[top]=x;
	}
}

char pop()
{
	if(top==-1)
	{
		printf("Underflow\n");
		return(0);
	}
	return item[top--];
}

void convert()
{
	int i,pos=0;
	char temp,symb;
	for(i=0;infix!='\0';i++)
	{
		symb=infix[i];
		switch(symb)
		{
			case '(': push(x);
				  break;
			case ')': while((temp=pop())!='(')
				  {
					postfix[pos++]=temp;
				  }
		
			case '^':
			case '%':
			case '*':
			case '/':
			case '-':
			case '+':
			while(!empty && precidence(item[top])>=precidence(symb))
			{
				postfix[pos++]=pop();
			}
			push(symb);
			break;
			default: postfix[pos++]=symb;
		}
	}
	while(
			temp=pop;
			postfix[pos++]=temp;
	      }
		







void precidence()
{
	switch(symb)
	{
		case '^':return(3);
		case '%':
		case '*':
		case '/':return(2);
		case '-':
		case '+':return(1);
		case ')':
		case '(':return(0);
	}
	return(symb);
}

int empty()
{
	if(top==-1)
	return TRUE;
	else
	return FALSE;
}
