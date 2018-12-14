#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int a[10],n,item,i,pos;

void create();
void display();
void insert();
void remove();


void create()
{
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elemtnts:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display()
{
	printf("\nThe array elemtnts are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void insert()
{
	printf("Enter the position of element to be inserted in an array:");
	scanf("%d",&pos);
	printf("\nEnter the element to be inserted in an array:");
	scanf("%d",&item);
	if(pos<=n-1)
	{
		for(i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=item;
		n=n+1;
	}
	else
	{
		printf("Invalid position\n");
	}
}

void remove()
{
	printf("Enter the position of element to be deleted in an array:");
	scanf("%d",&pos);
	item=a[pos];
	if(pos<=n-1)
	{
		for(i=pos;i<=n-1;i++)
		{
			a[i]=a[i+1];
		}
		n=n-1;
		printf("The deleted element= %d\n",item);
	}
	else
		printf("Invaild pos\n");
}

void main()
{
	int c;
	clrscr();
	do
	{
	printf("Enter operator:\n");
	printf("***MENU***\n1.CREATE\t2.Display\t3.insert\t4.delete\t5.exit\n");
	scanf("%d",&c);

	switch(c)
	{
	case 1: create();
		break;
	case 2: display();
		break;
	case 3: insert();
		break;
	case 4: remove();
		break;
	case 5: exit(0);
	default:printf("invald operator");
		break;
	}
	}while(c!=5);
	getch();
}
