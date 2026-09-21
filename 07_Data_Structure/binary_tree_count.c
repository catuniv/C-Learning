#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
	int data;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode *createNode (int data)
{
	TreeNode *newnode = malloc(sizeof(TreeNode));

	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

int countNodes(TreeNode *root)
{
	if (root == NULL) return 0;

	return 1 + countNodes(root->left) + countNodes(root->right);
}


int countLeaf(TreeNode *root)
{
	if (root == NULL) return 0;

	if (root->left == NULL && root->right == NULL)
		return 1;

	return countLeaf(root->left) + countLeaf(root->right);
}

int height(TreeNode *root)
{
	if (root == NULL) return 0;

	int leftHeight = 1 + height(root->left);
	int rightHeight = 1 + height(root->right);

	if (leftHeight > rightHeight)
		return leftHeight;
	else
		return rightHeight;
}

int main(void)
{
	TreeNode *root = createNode(10);

	root->left = createNode(20);	
	root->left->left = createNode(40);	
	root->right = createNode(30);	
	root->left->right = createNode(50);	
	
	printf("Node count: %d\n", countNodes(root));
	printf("Leaf count: %d\n", countLeaf(root));
	printf("Height: %d\n", height(root));
	

	return 0;
}
