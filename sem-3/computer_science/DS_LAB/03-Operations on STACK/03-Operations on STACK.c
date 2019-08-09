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
#define max 5          /*stack size*/

 int s[max],top=-1,flag=0;

 int push();
 int pop();
 int display();
 int palindrome();

 int main()
 {
     int o;
     while (1)
     {
        printf("\n---MENU---");
        printf("\n1.push\n2.pop\n3.display\n4.palindrome\n5.exit\n");
        printf("Enter choice:\n");
        scanf("%d",&o);
        switch(o)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: palindrome();
                    break;
            case 5: exit(0);
            default: printf("invalid option\n");
        }

     }

     return 0;
 }

int push()
{
    int x;
    if(top==(max-1))
    {
        printf("overflow\n");
    }
    else
    {
        printf("enter element\n");
        scanf("%d",&x);
        s[++top]=x;
    }


    return 0;
}

int pop()
{
    int x;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        x=s[top--];
        printf("popped elements:%d\n",x);
    }

    return 0;
}

int display()
{
    int i;
    if(top==-1)
    {
        printf("stack is underflow\n");
        return 0;
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\t",s[i]);
        }
    }

    return 0;
}
int palindrome()
{
    int i;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {

    for(i=0;i<=((top/2)+1);i++)
    {
        if(s[i]==s[top-i]) continue;
        else
    {
        flag=1;
        break;
    }
    }

    if(flag)
    {
        printf("Not palindrome\n");
        flag=0;
    }
    else printf("plaindrome\n");
    return 0;
}
}
