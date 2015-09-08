#include <stdio.h>
#include <stdlib.h>

 struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node * newnode(int n)
{
	struct node * node =(struct node*)malloc(sizeof(struct node));
	node->data = n;
	node->left='\0';
	node->right='\0';
	return node;
}

void preorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	preorder(root->left);
	printf("%d\n",root->data);
	preorder(root->right);
	return;
}

void inorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d\n",root->data);
	inorder(root->left);
	inorder(root->right);
	return;
}
void postorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	
	postorder(root->left);
	postorder(root->right);
	printf("%d\n",root->data);
	return;
}

int main()
{
	struct node * root = newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	printf("preorder\n");
	preorder(root);
	printf("INorder\n");
	inorder(root);
	printf("postorder\n");
	postorder(root);
	return 0;
}
