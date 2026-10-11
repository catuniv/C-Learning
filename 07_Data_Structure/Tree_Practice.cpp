#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
	int data;
	TreeNode *left, *right;
};

TreeNode *createNode(int data)
{
	TreeNode *newnode = new TreeNode;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

TreeNode *make_linked_tree(void)
{
	TreeNode *root = new TreeNode;
	root->data = 10;
	root->right = NULL;
	root->left = NULL;

	root->left = createNode(5);
	root->left->left = createNode(2);
	root->right = createNode(15);
	root->right->right = createNode(20);
	root->left->right = createNode(7);

	return root;
}


int count_node(TreeNode *root)
{
	if (root == NULL) return 0;

	return 1 + count_node(root->left) + count_node(root->right);

}

int count_leaf(TreeNode *root)
{
	if (root == NULL) return 0;

	if (root->left == NULL && root->right == NULL) return 1;

	return count_leaf(root->left) + count_leaf(root->right);

}

int sum_node1(TreeNode *root)
{
	if (root == NULL) return 0;

	queue<TreeNode*> q;
	int sum = 0;

	q.push(root);

	while(!q.empty())
	{
		TreeNode *current = q.front();
		sum += current->data;
		q.pop();

		if (current->left != NULL)
			q.push(current->left);
		if (current->right != NULL)
			q.push(current->right);
	}

	return sum;
}

int sum_node2(TreeNode *root)
{
	if (root == NULL) return 0;

	return root->data + sum_node2(root->left) + sum_node2(root->right);
}


int main(void)
{
	TreeNode *root = make_linked_tree();

	cout << "[Total Node]" << count_node(root) << endl;
	cout << "[Leaf Node]" << count_leaf(root) << endl;
	cout << "[Sum]" << sum_node2(root) << endl;

	return 0;
}
