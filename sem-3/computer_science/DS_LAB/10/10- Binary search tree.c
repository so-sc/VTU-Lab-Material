#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct bst
{
	int data;
	struct bst *left;
	struct bst *right;
};

typedef struct bst NODE;
NODE *node;

NODE *create(NODE *node,int data)
{
	NODE *temp;
	if(node==NULL)
	{
		temp=(NODE*)malloc(sizeof(node));
		temp->data=data;
		temp->left=temp->right=NULL;
	}	
	return temp;
}

NODE *search(NODE *node,int data)
{
	if(node==NULL)
	printf("No element found");
	else if(data > node->data)
	{
		node->right=search(node->right,data);
	}
	else if(data < node->data)
	{
		node->left=search(node->left,data);
	}
	else 
	{
		printf("Element found is %d:\n",node->data);
	}	
	return node;
}
	
void inorder(NODE*node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		printf("%d\t",node->data);		
		inorder(node->right);
	}
}	

void preorder(NODE*node)
{
	if(node!=NULL)
	{
		printf("%d\t",node->data);
		preorder(node->left);
		preorder(node->right);
	}
}

void postorder(NODE*node)
{
	if(node!=NULL)
	{
		postorder(node->left);
		postorder(node->right);
		printf("%d\t",node->data);	
	}
}


void main()
{
	int i,n,ch,data;
	NODE *root=NULL;
	do{
		printf("Enter your choice:\n1.Create\t2.Search\t3.Inorder\t4.Preorder\t5.Postorder\t6.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter N value: \n");
				scanf("%d",&n);
				printf("enter tree elements in ascending order\n");
				for(i=0;i<n;i++)
				{
					scanf("%d\t",&data);
					create(root,data);
				}
				break;
			case 2: printf("Enter the element to be searched:\n");
				scanf("%d",&data);
				root=search(root,data);
				break;
			case 3:inorder(root);
				break;
			case 4:preorder(root);
				break;
			case 5:postorder(root);
				break;
			case 6: exit(0);
			default: printf("Invalid\n");					
		}
	}while(ch!=6);
}
	
