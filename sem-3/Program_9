//9.Design, Develop and Implement a Program in C for the following operations on Singly Circular Linked List (SCLL) with header nodes
//a. Represent and Evaluate a Polynomial P(x,y,z) = 6x2y2z-4yz5+3x3yz+2xy5z-2xyz3
//b. Find the sum of two polynomials POLY1(x,y,z) and POLY2(x,y,z) and store the result in POLYSUM(x,y,z)
//Support the program with appropriate functions for each of the above operations

#include<stdio.h>
#include<malloc.h>
#include<math.h>
#include<stdlib.h>

struct node
{
	int cf, px, py,pz;
	int flag;
	struct node *link;
};

typedef struct node NODE;
NODE* getnode()
{
	NODE *x;
	x=(NODE*)malloc(sizeof(NODE));
	if(x==NULL)
	{
		printf("Insufficient memory\n");
		exit(0);
	}
return x;
}

void display(NODE *head)
{
	NODE *temp;
	if(head->link==head)
	{
		printf("Polynomial does not exist\n");
		return;
	}
	temp=head->link;
	printf("\n");
	while(temp!=head)
	{
		printf("%d x^%d y^%d z^%d",temp->cf,temp->px,temp->py,temp->pz);
		if(temp->link != head)
		printf(" + ");
		temp=temp->link;
	}
	printf("\n");
}

NODE* insert_rear(int cf,int x,int y,int z,NODE *head)
{
	NODE *temp,*cur;
	temp=getnode();
	temp->cf=cf;
	temp->px=x;
	temp->py=y;
	temp->pz=z;
	cur=head->link;
	while(cur->link!=head)
	{
		cur=cur->link;
	}
		cur->link=temp;
		temp->link=head;
		return head;
}

NODE* read_poly(NODE *head)
{
	int px, py, pz, cf, ch;
	do
	{
		printf("\nEnter coeff:");
		scanf("%d",&cf);
		printf("\nEnter x, y, z powers(0-indicate NO term): ");
		scanf("%d%d%d", &px, &py, &pz);
		head=insert_rear(cf,px,py,pz,head);
		printf("\nIf you wish to continue press 1 otherwise 0: ");
		scanf("%d", &ch);
	}while(ch != 0);
	return head;
}

NODE* add_poly(NODE *h1,NODE *h2,NODE *h3)
{
	NODE *p1,*p2;
	int x1,x2,y1,y2,z1,z2,cf1,cf2,cf;
	p1=h1->link;
	while(p1!=h1)			//first while
	{
		x1=p1->px;
		y1=p1->py;
		z1=p1->pz;
		cf1=p1->cf;
		p2=h2->link;
		while(p2!=h2)		//second while
	{
		x2=p2->px;
		y2=p2->py;
		z2=p2->pz;
		cf2=p2->cf;
		if(x1==x2 && y1==y2 && z1==z2)break;
			p2=p2->link;
	}				//end of second while

	if(p2!=h2)
	{
		cf=cf1+cf2;
		p2->flag=1;
		if(cf!=0)
		h3=insert_rear(cf,x1,y1,z1,h3);
	}
	else
		h3=insert_rear(cf1,x1,y1,z1,h3);
		p1=p1->link;
	}				// end of first while
	p2=h2->link;

	while(p2!=h2)			// third while
	{
		if(p2->flag==0) h3=insert_rear(p2->cf,p2->px,p2->py,p2->pz,h3);
		p2=p2->link;
	}				// end of third while
return h3;
}					// add_poly ending

void evaluate(NODE *head)
{
	NODE *temp;
	int x, y, z;
	float result=0.0;
	temp=head->link;
	printf("\nEnter x, y, z, terms toevaluate:\n");
	scanf("%d%d%d", &x, &y, &z);
	while(temp!= head)
	{
		result = result + (temp->cf * pow(x,temp->px) * pow(y,temp->py) *pow(z,temp->pz));
		temp=temp->link;
	}
	printf("\nPolynomial result is: %f", result);
}


void main()
{
	NODE *h1,*h2,*h3;
	int ch;

	h1=getnode();
	h2=getnode();
	h3=getnode();

	h1->link=h1;
	h2->link=h2;
	h3->link=h3;

	while(1)
	{
		printf("\n\n 1.Evaluate polynomial\n 2.Add two polynomials\n3.Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: h1->link=h1;
				printf("\nEnter polynomial to evaluate:\n");
				h1=read_poly(h1);
				display(h1);
				evaluate(h1);
				break;
			case 2: h1->link=h1;
				printf("\nEnter the first polynomial:");
				h1=read_poly(h1);
				printf("\nEnter the second polynomial:");
				h2=read_poly(h2);
				h3=add_poly(h1,h2,h3);
				printf("\nFirst polynomial is:");
				display(h1);
				printf("\nSecond polynomial is: ");
				display(h2);
				printf("\nThe sum of 2 polynomials is:");
				display(h3);
				break;
			case 3: exit(0);
				default:printf("\nInvalid entry");
				break;
		} //end of switch
	} // end of while
} // end of main()
