#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int max=5, count;

struct student
{
	char usn[10];
	char name[25];
	char branch[15];
	int sem;
	char phno[10];
	struct student *next;
};

typedef struct student node;

node* getnode(node *head)
{
	node *nn;
	nn=(node*)malloc(sizeof(node));
	printf("Enter USN");
	scanf("%s",nn->usn);
	printf("Enter Name");
	scanf("%s",nn->name);
	printf("Enter Branch");
	scanf("%s",nn->branch);
	printf("Enter Semester");
	scanf("%d",&nn->sem);
	printf("Enter Phone number");
	scanf("%s",nn->phno);
	nn->next='\0';
	return nn;
}

node* create(node *head)
{
	node *nn;
	nn=getnode(head);
	if(head==NULL)
	{
	head=nn;
	}
	else
	{	
		nn->next=head;
		head=nn;
	}
	return head;
}
	
node* insertfront(node *head)
{
	node *nn;
	nn=create(head);
	head=nn;
	return head;
}

node *insertrear(node *head)
{
	node *nn,*p;
	p=head;
	nn=getnode(head);
		if(head==NULL)
		{
		
		head=nn;
		
		}
		else
		{
			while(p->next!=NULL)
			{
				p=p->next;
			}
		
			p->next=nn;
		}
		return head;
		
}


int countnode(node *head)
{
	node *p;
	p=head;
	count=0;
	while(p!=NULL)
		{
			p=p->next;
			count++;
		}
	return count;
}	

node *deletefront(node *head)
{
	node *p;
	if(countnode(head)==0)
	{
		printf("List is empty\n");
		return(0);
	}
	else
	{
		p=head;
		head=head->next;
		free(p);
	}
	return head;
}

node *deleterear(node *head)
{
	node *p,*q;
	if(head==NULL)
	{
		printf("List is empty\n");
		return(0);
	}
	else
	{
		p=head;
		while((p->next)->next!=NULL)
		{
			p=p->next;
		}
		q=p->next;
		p->next=NULL;
		free(q);
	}
}		

node *display(node *head)
{
	
	if(head==NULL)
	printf("list is empty\n");
	else
	{	node *p;
		p=head;
		while(p!=NULL)
		{
			printf("USN:%s\tName:%s\tBranch:%sSem:%d\tPh.no%s\n",p->usn,p->name,p->branch,p->sem,p->phno);
			p=p->next;
		}printf("\nno of nodes:%d\n",countnode(head));
	}return head;
}

node *insert(node *head)
{
	int ch;
	do
	{
	printf("Enter your choice:\n1.Insert Front\t2.Insert Rear\t3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: head=insertfront(head);
			break;
		case 2: head=insertrear(head);
			break;
		case 3: break;
		default:printf("Invalid Input\n");
	}
	}while(ch!=3);
	return head;
}


node *delete(node *head)
{
	int ch;
	do
	{
	printf("Enter your choice:\n1.Insert Front\t2.Insert Rear\t3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: head=deletefront(head);
			break;
		case 2: head=deleterear(head);
			break;
		case 3:break;
		default:printf("Invalid Input\n");
	}
	}while(ch!=3);return head;
}


node *stack(node *head)
{
	int ch;
	do
	{
	printf("Enter your choice:\n1.Insert Front\t2.Insert Rear\t3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: head=insertfront(head);
			break;
		case 2: head=deletefront(head);
			break;
		case 3: break;
		default:printf("Invalid Input\n");
	}
	}while(ch!=3);return head;
}

	
void main()
{
	int i,ch,n;
	node *head='\0';
	do
	{
	printf("Enter your choice:\n1.Create\t2.Insert\t3.Delete\t4.Display\t5.Stack\t6.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter the number of students:\n");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				head=create(head);
			}
			break;
		case 2: head=insert(head);
			break;
		case 3: head=delete(head);
			break;
		case 4: head=display(head);
			break;
		case 5: head=stack(head);
			break;
		case 6: exit(0);
		default:printf("Invalid Input\n");
	}
	}while(ch!=6);
}

