#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
};

struct node* create()
{
	int x;
	printf("Enter data: ");
	scanf("%d",&x);
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(x==-1)
	return 0;
	newnode->data=x;
	printf("For left child of %d. ",x);
	newnode->lchild=create();
	printf("For right child of %d. ",x);
	newnode->rchild=create();
	return newnode;
}

void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%d ",root->data);
		inorder(root->rchild);
	}
}

void preorder(struct node* root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}
void postorder(struct node* root)
{
	if(root!=NULL)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d ",root->data);
	}
}

void main()
{
	struct node* root;
	root=0;
	root=create();
	printf("Inorder is: ");
	inorder(root);
	printf("\n");
	printf("Preorder is: ");
	preorder(root);
	printf("\n");
	printf("Postorder is: ");
	postorder(root);
	printf("\n");
}

