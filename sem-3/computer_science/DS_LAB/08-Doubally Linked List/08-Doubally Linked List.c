#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct employee
{
    int ssn;
    char name[25],dept[12],desig[20],phone[11];
    int salary;
    struct employee *next;
    struct employee *prev;
};
typedef struct employee node;
node *head=NULL;
node *getnode()
{
    node *nn;
    nn=(node*)malloc(sizeof(node));
    printf("Name: ");
    scanf("%s",nn->name);
    printf("SSN: ");
    scanf("%d",&nn->ssn);
    printf("Department:");
    scanf("%s",nn->dept);
    printf("Designation: ");
    scanf("%s",nn->desig);
    printf("Phone number: ");
    scanf("%s",nn->phone);
    printf("Salary: ");
    scanf("%d",&nn->salary);
    nn->next=nn->prev=NULL;
    return nn;
}
void create()
{
    node *nn,*p;
    p=head;
    if(head==NULL)
    {
        nn=getnode();
        head=nn;
    }
    else
    {
        nn=getnode(head);
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=nn;
        nn->prev=p;
    }
}
void insertfront()
{
    node *nn;
    nn=getnode();
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        nn->next=head;
        head->prev=nn;
        head=nn;
    }
}
void insertrear()
{
    create();
}
void display()
{
    node *p;
    int count=0;
    if(head==NULL)
    {
        printf("No data\n");
    }
    else
    {
        p=head;
        printf("Name\tSSN\tDepartment\tDesignation\tphone number\tsalary\n");
        while(p!=NULL)
        {
            count++;
            printf("%s\t%5d\t%10s\t%10s\t%10s\t%5d\n",p->name,p->ssn,p->dept,p->desig,p->phone,p->salary);
            p=p->next;

        }
        printf("The nodes in list is %d\n",count);
    }
}
void deletefront()
{
    node *p;
    if(head==NULL)
    {
        printf("No data\t");
    }
    else if(head->next==NULL)
    {
        p=head;
        head=NULL;
        free(p);
    }
    else
    {
        p=head;
        (head->next)->prev=NULL;
        head=head->next;
        p->next=NULL;
        free(p);
    }
}
void deleterear()
{
    node *p,*q;
    if(head==NULL)
    {
        printf("No data\n");

    }
    else if(head->next==NULL)
    {
        p=head;
        head=NULL;
        free(p);
    }
    else
    {
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q=p->prev;
        q->next=NULL;
        p->prev=NULL;
        free(p);
    }
}
void main()
{
    int ch,n,i;
    while(1)
    {
        printf("\n---Employee data---\n");
        printf("1.create\n2.display\n3.insert font\n4.insert rear\n5.delete front\n6.delete rear\n7.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter number of employees\n");
                   scanf("%d",&n);
                   for(i=0;i<n;i++)
                   {
                       create();
                   }
                   break;
            case 2:display();
                   break;
            case 3:insertfront();
                   break;
            case 4:insertrear();
                   break;
            case 5:deletefront();
                   break;
            case 6:deleterear();
                   break;
            default:exit(0);

        }
    }
}
