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

void levelOrder(TreeNode *root)
{
	if (root == NULL) return;

	TreeNode *queue[100];
	int front = 0;
	int rear = 0;

	queue[rear++] = root;

	while(front < rear)
	{
		TreeNode *current = queue[front++];

		printf("%d ", current->data);

		if (current->left != NULL)
			queue[rear++] = current->left;

		if (current->right != NULL)
			queue[rear++] = current->right;
	}
}


int main(void)
{
	TreeNode *root = createNode(10);

	root->left = createNode(20);	
	root->left->left = createNode(40);	
	root->right = createNode(30);	
	root->left->right = createNode(50);	

	levelOrder(root);
	
	

	return 0;
}
