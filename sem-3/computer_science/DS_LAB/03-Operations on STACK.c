//3. Design, Develop and Implement a menu driven program in C for the following operations on STACK of integers (Array implementation of stack with maximum size MAX)
//a. Push an element on to stack
//b. Pop an element from stack.
//c. Demonstrate how stack can be used to check palindrome.
//d. Demonstrate Overflow and Underflow situations on stack.
//e. Display the status of stack.
//f. Exit.
//Support the program with appropriate functions for each of the above operations.

#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack[max],ch,count=0,status=0,item,top=-1,ret;

void push(int stack[],int item)						//1.push
{
	if(top==(max-1))
	printf("overflow");
	else
	{
	stack[++top]=item;
	status++;
	}
}

int pop(int stack[])							//2.pop
{
	if(top==-1)
	printf("underflow");
	else
	{
	ret=stack[top--];
	status--;
	printf("popped element is %d",ret);

	}
return ret;
}

int pallindrome(int stack[])						//3.palin
{
	int i,temp,j;
	temp=status;
	for(i=0,j=status-1;i<status;i++,j--)
	{
		if(stack[i]==stack[j])
		count++;
		
		else
		{
		printf("stack not pallin");
		return 0;
		}
	}
	if(temp==count)
	printf("\n Stack contents are pallin");

}

void display(int stack[])						//4.dis
{
	int i;
	if(top==-1)
	printf("Stack is empty");
	else
	{
		printf("\n The stack contents are:");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}


void main()
{
	int c;
	
	do
	{
	printf("Enter operator:\n");
	printf("***MENU***\n1.Push\t2.Pop\t3.palindrome\t4.display\t5.exit\n");
	scanf("%d",&c);

	switch(c)
	{
	case 1: printf("Enter item to be pushed:\n");
		scanf("%d",&item);
		push(stack,item);
		break;
	case 2: item=pop(stack);
		break;
	case 3: pallindrome(stack);
		break;
	case 4: display(stack);
		break;
	case 5: exit(0);
	default:printf("invald operator");
		break;
	}
	}while(c!=5);
	
}
