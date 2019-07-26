#include<stdio.h>
#include<stdlib.h>
int a[100],i,elem,pos,n;
int create()
{

    printf("Enter the number of elements\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Array is empty\n");
        return 0;
    }
    else
    {
        printf("Enter the elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }
return 0;
}
int display()
{
    if(n==0)
    {
        printf("Array is empty\n");
        return 0;
    }
    else
    {
        printf("Elements:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
return 0;
}
int insert()
{
    printf("Enter the position where new elements has to be entered\n");
    scanf("%d",&pos);
    if(!(pos>0 && pos<=n))
    {
        printf("Invalid position\n");
        return 0;
    }
    else
    {
        printf("Enter the new element\n");
        scanf("%d",&elem);
        for(i=n;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=elem;
        n+=1;
        display();
    }
    return 0;

}
int delete()
{
    printf("Enter the position where new elements has to be entered\n");
    scanf("%d",&pos);
    if(!(pos>0 && pos<n))
    {
        printf("Invalid option");
        return 0;
    }
    else
    {
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n-=1;
        display();
    }
    return 0;

}
int main()
{

    while(1)
    {
        int o;
        printf("\nMENU\n");
        printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch(o)
        {
            case 1:create();
                   break;
            case 2:display();
                    break;
            case 3:insert();
                    break;
            case 4:delete();
                    break;
            case 5:exit(0);
            default:printf("invalid option\n");

        }
    }
    return 0;
}
