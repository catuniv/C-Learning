#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TreeNode
{
	int data;
	struct TreeNode *left, *right;
}TreeNode;

TreeNode *createNode(int data)
{
	TreeNode *newnode = malloc(sizeof(TreeNode));
	
	newnode->data = data;
	newnode->left = newnode->right = NULL;

	return newnode;
}

void insert(TreeNode **root, int data)
{
	if (*root == NULL) 
	{
		*root = createNode(data);
		return;
	}


	if ((*root)->data > data)
	{
		insert(&(*root)->left, data);
	}
	else if ((*root)->data < data)
	{
		insert(&(*root)->right, data);
	}

}

void inorder(TreeNode *root)
{
	if (root == NULL) return;

	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}


int main(void)
{
	TreeNode *root = NULL;
	
	insert(&root, 50);
	insert(&root, 30);
	insert(&root, 70);
	insert(&root, 20);
	insert(&root, 40);
	insert(&root, 60);
	insert(&root, 80);
	insert(&root, 35);

	inorder(root);
	printf("\n");

	return 0;
}
