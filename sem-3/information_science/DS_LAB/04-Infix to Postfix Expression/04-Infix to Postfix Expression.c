//4.) Design, Develop and Implement a Program in C for converting an Infix  Expression to Postfix Expression.
//Program should support for both parenthesized and free parenthesized expressions with the operators:
//+, -, *, /, %(Remainder), ^(Power) and alphanumeric operands.
//Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
//Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.


 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 5
char infix[50],postfix[50],item;
void convert();
struct stack
{
    int top;
    char item[max];
}s;

void push(char value)
{
    if(s.top==(max-1))
    {
        printf("The stack is overflow\n");
        exit(0);
    }
    else
    {
        s.item[++s.top]=value;
    }

}

char pop()
{
    if(s.top==-1)
    {
        printf("Stack underflow\n");
        exit(0);

    }
    return (s.item[s.top--]);
}

int empty()
{
    if(s.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedace(char c)
{
    switch(c)
    {
        case '^':return 3;
        case '*':
        case '/':
        case '%':return 2;
        case '+':
        case '-':return 1;
        case '(':return 0;
    }
}

void main()
{
    s.top=-1;
    printf("Enter the infix expression\n");
    gets(infix);

    convert();
    printf("The postfix expression:\n");
    puts(postfix);
}

void convert()
{
    int i,pos=0;
    char symb,t;
    for(i=0;infix[i]!='\0';i++)
    {
        symb=infix[i];
        switch(symb)
        {
            case '(':push(symb);
                    break;
            case ')':while((t=pop())!='(')
                    {
                    postfix[pos++]=t;
                    }
                    break;
            case '^':
            case '*':
            case '/':
            case '%':
            case '+':
            case '-':while((!empty()) && ((precedace(s.item[s.top])) >= precedace(symb)))
                    {
                        postfix[pos++]=pop();
                    }
                    push(symb);
                    break;
            default:postfix[pos++]=symb;
                    break;


        }
    }
    while(!empty())
    {
        postfix[pos++]=pop();
    }
    postfix[pos]='\0';

}

