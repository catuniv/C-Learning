#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
	int data;
	struct TreeNode *left, *right;
}TreeNode;

TreeNode *createNode(int data)
{
	TreeNode *newnode = malloc(sizeof(TreeNode));

	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

void preorder(TreeNode *root)
{
	if (root == NULL) return;

	printf(" %d", root->data);
	preorder(root->left);
	preorder(root->right);

}

void inorder(TreeNode *root)
{
	if (root == NULL) return;

	inorder(root->left);
	printf(" %d", root->data);
	inorder(root->right);
}

void postorder(TreeNode *root)
{
	if (root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	printf(" %d", root->data);

}
void freeTree(TreeNode *root);

int main(void)
{

	TreeNode *root = createNode(10);
	root->left = createNode(20);
	root->right = createNode(30);
	root->left->left = createNode(40);
	root->left->right = createNode(50);

	printf("Preorder :");
	preorder(root);
	printf("\n");

	printf("Inorder :");
	inorder(root);
	printf("\n");

	printf("Postorder :");
	postorder(root);
	printf("\n");


	return 0;
}
