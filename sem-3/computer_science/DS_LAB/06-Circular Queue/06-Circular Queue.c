#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define max 5
typedef struct
{
    int front,rear;
    int item[max];
}cqueue;
cqueue cq;
void cqinsert(int val)
{
    if(cq.front==(cq.rear+1)%max)
    {
        printf("circular queue is full");
    }
    else{
        cq.rear=(cq.rear+1)%max;
        cq.item[cq.rear]=val;
    }
}
int cqdelete()
{
    int value;
    if(cq.front==cq.rear)
    {
        printf("circular queue is empty");
    }
    else{
        cq.front=(cq.front+1)%max;
        value=cq.item[cq.front];
        printf("deleted element is %d\n",value);
    }return 0;
}
void cqdisplay()
{
    int i;
    if(cq.front==cq.rear)
    {
        printf("circular queue is empty");
    }
    else{
        if(cq.front<cq.rear)
        {
            for(i=cq.front+1;i<=cq.rear;i++)
            {
                printf("%d\t",cq.item[i]);
            }
        }
        else{
            if(cq.front!=(max-1))
            {
                for(i=cq.front+1;i<=(max-1);i++)
                {
                    printf("%d\t",cq.item[i]);
                }
                for(i=0;i<=cq.rear;i++)
                {
                    printf("%d\t",cq.item[i]);
                }
            }
        }
    }
}
void main()
{
    int ch,value;
    while(1)
    {
        printf("\n---MENU---\n");
        printf("1.insert\n2.delete\n3.display\n4.exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the value : ");
                   scanf("%d",&value);
                cqinsert(value);
                break;
            case 2:cqdelete();
                   break;
            case 3:cqdisplay();
                   break;
            case 4:exit(0);
            default:printf("invalid\n");

        }
    }
}

