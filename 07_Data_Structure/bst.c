#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
	int data;
	struct TreeNode *left, *right;
}TreeNode;

TreeNode *createNode (int data)
{
		TreeNode *newnode = malloc(sizeof(TreeNode));
		newnode->data = data;
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
}


TreeNode *insert(TreeNode *root, int data)
{
	if (root == NULL)
	{
		TreeNode *newnode = createNode(data);
		return newnode;
	}

	if (data < root->data)
		root->left = insert(root->left, data);

	if (data > root->data)
		root->right = insert(root->right, data);

	return root;
}

void inorder(TreeNode *root)
{
	if (root == NULL) return;

	inorder(root->left);
	printf(" %d", root->data);
	inorder(root->right);
}

TreeNode *search(TreeNode *root, int target)
{
	if (root == NULL) return NULL;

	if (root->data == target) return root;

	if (root->data > target)
		return search(root->left, target);

	return search(root->right, target);
}

TreeNode *findMin(TreeNode *root)
{
	if (root == NULL) return NULL;

	while(root->left != NULL)
		root = root->left;

	return root;
}

TreeNode *deleteNode(TreeNode *root, int target)
{
	if (root == NULL) return NULL;

	if (target < root->data)
		return deleteNode(root->left, target);

	else if (target > root->data)
		return deleteNode(root->right, target);
	else
		if (root->left == NULL)
		{
			TreeNode *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			TreeNode *temp = root->left;
			free(root);
			return temp;
		}
		else
		{
			TreeNode *temp = findMin(root->right);
			root->data = temp->data;
			root->right = deleteNode(root->right, temp->data);
		}

	
	return root;
}

int main(void)
{
	TreeNode *root = NULL;

	root = insert(root, 50);
	root = insert(root, 30);
	root = insert(root, 70);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 60);
	root = insert(root, 80);
	root = insert(root, 35);

	inorder(root);
	printf("\n");

	TreeNode *result = search(root, 35);

	if (result != NULL)
		printf("Found: %d\n", result->data);
	else
		printf("Not Found\n");

	TreeNode *minNode = findMin(root);

	if (minNode != NULL)
		printf("Min: %d\n", minNode->data);

	return 0;
}
		
