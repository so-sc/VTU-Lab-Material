#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct bst
{
    int data;
    struct bst *lc,*rc;
};
typedef struct bst node;

node *create(node *root,int a)
{
    node *temp;
    if(root ==NULL)
    {
        temp=(node*) malloc(sizeof(node));
        root =temp;
        temp->data=a;
        temp->rc=temp->lc=NULL;
        return root;
    }
    else if(a<root->data) root->lc=create(root->lc,a);
    else if(a>root->data) root->rc=create(root->rc,a);
    else return root;
}
 void search(node *root,int k)
 {
     if(root==NULL) printf("Key not found\n");
     else if(k<root->data) search(root->lc,k);
     else if(k>root->data) search(root->rc,k);
     else printf("Key is found\n");
}
void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->lc);
        preorder(root->rc);
    }
}
void postorder(node *root)
{
    if(root!=NULL)
    {

        postorder(root->lc);
        postorder(root->rc);
        printf("%d\t",root->data);
    }
}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->lc);
        printf("%d\t",root->data);
        inorder(root->rc);
    }
}
int traverse(node *root)
{
    int ch;
    while(1)
    {
        printf("\n---MENU---\n");
        printf("1. Inorder traversal\n2. Preorder traversal\n3. Postorder traversal\n4. exit\n");
        printf("Enter the option\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Inorder traversal\n");
                inorder(root);
                break;
        case 2:printf("Preorder traversal\n");
                preorder(root);
                break;
        case 3:printf("Postorder traversal\n");
                postorder(root);
                break;
        default:return 0;

        }
    }
}
void main()
{
    node *root;
    int i,n,ele,key,ch;
    root=NULL;
    while (1)
    {
        printf("\n---MENu---\n");
        printf("1. create\n2. search\n3. traversal\n4. exit\n");
        printf("Enter the option\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the number of elements\n");
                    scanf("%d",&n);
                    printf("Enter the elements to be added\n");
                    for(i=0;i<n;i++)
                    {
                         scanf("%d",&ele);
                         root=create(root,ele);
                    }
                    break;
            case 2:printf("Enter the element to be searched\n");
                    scanf("%d",&key);
                    search(root,key);
                    break;
            case 3:traverse(root);
                    break;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }

}
