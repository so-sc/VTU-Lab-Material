#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define max 10
int symb;
char postfix[50];

struct stack
{
	int top;
	char item[max];
}s;

void push(char value)
{
	if(s.top==(max-1))
	{
	printf("full\n");
	}
	else
	{
	s.item[++s.top]=value;
	}
}

int empty()
{
	if(s.top==-1)
	return 1;
	else
	return 0;
}

char pop()
{
	if(!empty())
	{
		return(s.item[s.top--]);
	}
}

int operation(int a,int b,int c)
{
	switch(c)
	{
		case '+':return(a+b);
		case '-':return(a-b);
		case '*':return(a*b);
		case '/':return(a/b);
		case '%':return(a%b);
		case '^':return(pow(a,b));
	}
}

int evaluate()
{
	int i;
	int op1,op2,value,ans;
	for(i=0;postfix[i]!='\0';i++)
	{
		symb=postfix[i];	
		if(symb>='0'&&symb<='9')
		{
			push((int)(symb-'0'));
		}
		else
		{
			op1=pop();
			op2=pop();
			value=operation(op2,op1,symb);
			push(value);
		}
	}
ans=pop();
return ans;
}

void main()
{
	int ax;
	s.top=-1;
	printf("Enter postfix:\n");
	gets(postfix);
	ax=evaluate();
	printf("ans=%d\n",ax);
}
