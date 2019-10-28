#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define max 5

char postfix[100];

struct stack
{
    int item[max];
    int top;
}s;

void push(int value)
{
    if(s.top==max-1) printf("overflow\n");
    else
    {
        //printf("Enter the element to be added\n");
        s.item[++s.top]=value;
    }
}

int pop()
{
    if(s.top==-1) printf("underflow\n");
    else return(s.item[s.top--]);
}

int empty()
{
     if(s.top==-1) return 1;
    else return 0;
}
int operation(int a,int b,char o)
{
    switch (o)
    {
    case '^':return(pow(a,b));
    case '/':return(a/b);
    case '%':return(a%b);
    case '*':return(a*b);
    case '+':return(a+b);
    case '-':return(a-b);


    }
}
int evaluate()
{
    int i,a,b,ans,value;
    char symb;
    for(i=0;postfix[i]!='\0';i++)
    {
        symb=postfix[i];
        if(symb>='0' && symb<='9')
        {
            push((int) (symb-'0'));
        }
        else
        {
            a=pop();
            b=pop();
            value=operation(b,a,symb);
            push(value);
        }

    }
    ans=pop();
    return ans;
}
void main()
{
    s.top=-1;
    int ans;
    printf("Enter the postfix expression\n");
    gets(postfix);
    ans=evaluate();
    printf("Resultant=%d",ans);
}
