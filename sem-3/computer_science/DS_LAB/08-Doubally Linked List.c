#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int MAX=1,count;


struct emp
{
    int ssn;
    char name[20];
    char dept[10];
    char desig[15];
    int sal;
    char phno[10];
    struct emp *left;
    struct emp *right;
};
typedef struct emp NODE;


int countnodes(NODE *head)
{
    NODE *p;
    count=0;
    p=head;
    while(p!=NULL)
    {
          p=p->right;
          count++;
    }
    return count;
}


NODE* getnode()
{
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->right=newnode->left=NULL;
    printf("\nEnter SSN, Name, Dept, Designation, Sal,Ph.No\n");
    scanf("%d",&newnode->ssn);
    scanf("%s",(newnode->name));
    scanf("%s",(newnode->dept));
    scanf("%s",(newnode->desig));
    scanf("%d",&newnode->sal);
    scanf("%s",(newnode->phno));
return newnode;
}


void display(NODE *head)
{
    NODE *p,*newnode;
    if(head==NULL)
    printf("\n No employee data \n");
    else
    {
        p=head;
        printf("\n----EMPLOYEE DATA----\n");
        printf("\nSSN\tNAME\tDEPT\tDESINGATION\tSAL\t\tPh.NO.");
        while(p!=NULL)
        {
            printf("\n%d\t%s\t%s\t%s\t\t%d\t\t%s", p->ssn, p->name, p->dept,p->desig, p->sal, p->phno);
            p = p->right; //Go to next node...
        }
        printf("\nThe no. of nodes in list is:%d",countnodes(head));
     }
}


NODE* create(NODE *head)
{
    NODE *newnode,*p;
    p=head;
    if(head==NULL)
    {
        newnode=getnode();
        head=newnode;
    }
    else if(countnodes(head)<MAX)
    {
        newnode=getnode();
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=newnode;
        newnode->left=p;
    }
    else
    printf("Overflow");
return head;
}


NODE* insert_end(NODE *head)
{
        if(countnodes(head)==MAX)
        printf("\n list is full ");
        else
        head=create(head);
        return head;
}


NODE* insert_front(NODE *head)
{
        NODE *newnode,*p;
        if(countnodes(head)==MAX)
        printf("list is full\n");else
        {
              if(head==NULL)
              {
                    newnode=getnode();
                    head=newnode;
              }
              else
              {
                    newnode=getnode();
                    newnode->right=head;
                    head->left=newnode;
                    head=newnode;
               }
        }
return head;
}


NODE* Insert(NODE *head)
{
    int ch;
    do
    {
          printf("\n1.insert in the front \t2.insert in the end\t3.exit\n");
          printf("enter your choice:\n");
          scanf("%d",&ch);
          switch(ch)
          {
                case 1:head=insert_front(head);
                       break;
                case 2:head=insert_end(head);
                        break;
                case 3:exit;
          }
          display(head);
    }while(ch!=3);
return head;
}


NODE* delete_front(NODE *head)
{
      NODE *p;
      if(head==NULL)
      printf("\n list is empty\n");
      else if(countnodes(head)==1)
      {
            p=head;
            head=NULL;
            free(p);
            printf("\nNode is deleted");
      }
      else
      {
            p=head;
            head->right->left=NULL;
            head=head->right;
            free(p);
            printf("\nfront node is deleted\n");
      }
return head;
}


NODE* delete_end(NODE *head)
{
        NODE *p,*q;
        p=head;
        if(head==NULL)
        printf("\nList is Underflow");
        else if(countnodes(head)==1)
        {
              p=head;
              head=NULL;
              free(p);
              printf("\nNode is deleted");
        }
        else
        {
              while(p->right!=NULL)
              {
                        p=p->right;
              }
              q=p->left;
              q->right=NULL;
              p->left=NULL;
              free(p);
              printf("\n last end entry is deleted");
        }
  return head;
}


NODE* Del(NODE *head)
{
              int ch;
              do
              {
                      printf("\n1.Delete the front end\t2.Delete the end\t3.exit\n");
                      printf("enter the choice:");
                      scanf("%d",&ch);
                      switch(ch)
                      {
                              case 1:head=delete_front(head);
                                     break;
                              case 2:head=delete_end(head);break;
                              case 3:break;
                       }
                       display(head);
              }while(ch!=3);
  return head;
}


NODE* Queue(NODE *head)
{
          int ch, ch1,ch2;
          do
          {
                        printf("\nDLL used as Double Ended Queue");
                        printf("\n1.QUEUE- Insert at Rear & Delete from Front");
                        printf("\n2.QUEUE- Insert at Front & Delete from Rear");
                        printf("\n3.Exit");
                        printf("\nEnter your choice:");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                               case 1:
                                      do
                                      {
                                              printf("\n1.Insert at Rear\t2.Delete from From
                                              Front\t3.Exit");
                                              printf("\nEnter your choice: ");
                                              scanf("%d", &ch1);
                                              switch(ch1)
                                              {
                                                              case 1: head=insert_end(head);
                                                              break;
                                                              case 2: head=delete_front(head);
                                                              break;
                                                              case 3: break;
                                              }
                                       }while(ch1!=3);
                                       break;
                              case 2:
                                      do
                                      {
                                              printf("\n1.Insert at Front\t2.Delete from
                                              Rear\t3.Exit");
                                              printf("\nEnter your choice: ");
                                              scanf("%d", &ch2);
                                              switch(ch2)
                                              {
                                                      case 1: head=insert_front(head);
                                                      break;
                                                      case 2: head=delete_end(head);break;
                                                      case 3: break;
                                              }
                                      }while(ch2!=3);
                                      break;
                              case 3: break;
                        }
      }while(ch!=3);
      display(head);
return head;
}

void main()
{
    int i,n,ch;
    NODE *head;
    head=NULL;
    printf("\n------------employee database-----------\n");
    do
    {
        printf("\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Queue\n6.Exit\n");
        printf("enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
              case 1:printf("\n enter the no.of employees to be entered \n");
              scanf("%d",&n);
              for(i=0;i<n;i++)
              head=create(head);
              break;
              case 2:head=Insert(head);
              break;
              case 3:head=Del(head);
              break;
              case 4:display(head);break;
              case 5:head=Queue(head);
              break;
              case 6:exit(0);
              break;
         }
     }
              while(ch!=6);
}
