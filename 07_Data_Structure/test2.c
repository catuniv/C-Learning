#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TreeNode
{
	char* data;
	struct TreeNode *left, *right;
}TreeNode;

TreeNode *initTreeNode(char *data)
{
	TreeNode *newnode = malloc(sizeof(TreeNode));

	newnode->data = malloc(strlen(data) + 1);
	strcpy(newnode->data, data);
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}
	
void preorder(TreeNode *root)
{
	if (root == NULL)
		return;

	printf("%s ", root->data);
	preorder(root->left);
	preorder(root->right);

}

void inorder(TreeNode *root)
{
	if (root == NULL)
		return;

	inorder(root->left);
	printf("%s ", root->data);
	inorder(root->right);

}


void postorder(TreeNode *root)
{
	if (root == NULL)
		return;

	postorder(root->left);
	postorder(root->right);
	printf("%s ", root->data);

}

int countNodes(TreeNode *root)
{
	if (root == NULL) return 0;

	if (root != NULL)
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
	
	int L = height(root->left);
	int R = height(root->right);
	int max = (L>R) ? L : R;

	return 1 + max;	
}


void levelorder(TreeNode *root)
{
	TreeNode *queue[100];

	int front = 0;
	int rear = 0;

	queue[rear++] = root;


	while(front < rear)
	{
		TreeNode *current = queue[front++];	

		printf("%s ", current->data);

		if (current->left != NULL)
			queue[rear++] = current->left;

		if (current->right != NULL)
			queue[rear++] = current->right;

	}
}
		


int main(void)
{
	TreeNode *root = initTreeNode("A");

	root->left = initTreeNode("B");
	root->right = initTreeNode("C");

	root->left->left = initTreeNode("D");
	root->left->right = initTreeNode("E");

	preorder(root);
	printf("\n");

	inorder(root);
	printf("\n");

	postorder(root);
	printf("\n");

	levelorder(root);
	printf("\n");

	printf("Count Nodes: %d\n", countNodes(root));
	printf("Count Leaf: %d\n", countLeaf(root));
	printf("Count Height: %d\n", height(root));


	return 0;
}
