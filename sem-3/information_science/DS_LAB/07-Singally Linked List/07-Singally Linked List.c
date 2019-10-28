#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int c;

struct student
{
    char name[25];
    char usn[25];
    char branch[25];
    char phone[25];
    int sem;
    struct student *link;
};
typedef struct student node;
node *head;

node *getnode()
{
    node *nn;
    nn=(node*)malloc(sizeof(node));
    printf("Enter the student details\n");
    printf("name\n");
    scanf("%s",nn->name);
    printf("Usn\n");
    scanf("%s",nn->usn);
    printf("Branch\n");
    scanf("%s",nn->branch);
    printf("Phone\n");
    scanf("%s",nn->phone);
    printf("Sem\n");
    scanf("%d",&nn->sem);
    nn->link=NULL;
    return nn;
}
void display()
{
    node *p;
    int count=0;
    if(head==NULL) printf("No student data\n");
    else
    {
        p=head;
        printf("Name\tusn\t\tbranch\tphone\tsem\n");
        while(p!=NULL)
        {
            count++;
            printf("%s\t%s\t\t%s\t%s\t%d\n",p->name,p->usn,p->branch,p->phone,p->sem);
            p=p->link;
        }
        printf("The number of nodes = %d\n",count);
    }

}
void create()      //insertfront
{
    node *temp;
    temp=getnode();
    if(head==NULL) head=temp;
    else
    {
        temp->link=head;
        head=temp;
    }

}
void insertfront()
{
    create();
}
void insertrear()
{
    node *temp,*p;
    p=head;
    temp=getnode();
    if(head==NULL) head=temp;
    else
    {
        while (p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;

    }

}
void deletefront()
{
    node *p;
    if(head==NULL) printf("no student data\n");
    else
    {
        p=head;
        head=head->link;
    }
    free(p);

}
void deleterear()
{
    node *p,*q;
    if(head==NULL) printf("no student data\n");
    else if (head->link==1)
    {
        p=head;
        head=NULL;
        free(p);
        printf("node deleted\n");
    }
    else
    {
        p=head;
        while ((p->link)->link!=NULL)
        {
            p=p->link;
        }
        q=p->link;
        p->link=NULL;
        free(q);

    }



}
void main()
{
    int x,n,i;

head=NULL;
    while (1)
    {
        printf("===MENU===\n");
        printf("1.create\n2.display\n3.insertrear\n4.insertfront\n5.deleterear\n6.deletefront\n7.exit\n");
        printf("Enter the option\n");
        scanf("%d",&x) ;
        switch (x)
        {
        case 1:printf("enter the number of students\n");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                    create();
                    break;

case 2: display(); break;
case 3:insertrear(); break;
case 4:insertfront(); break;
case 5:deleterear(); break;
case 6:deletefront(); break;
default:exit(0);

        }
    }

}
