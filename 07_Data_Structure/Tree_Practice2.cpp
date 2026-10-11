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

TreeNode *insertNode(TreeNode *root, int data)
{
	if (root == NULL) return createNode(data);

	if (data < root->data)
		root->left = insertNode(root->left, data);
	else if (data > root->data)
		root->right = insertNode(root->right, data);

	return root;
}

TreeNode *findMin(TreeNode *root)
{
	while(root->left != NULL)
		root = root->left;

	return root;
}

TreeNode *deleteNode(TreeNode *root, int target)
{
	if (root == NULL) return NULL;

	if (target < root->data)
		root->left = deleteNode(root->left, target);
	else if (target > root->data)
		root->right = deleteNode(root->right, target);

	else
	{
		// No Child and One Child
		if (root->left == NULL)
		{
			TreeNode *temp = root->right;
			delete root;
			return temp;	
		}
		else if (root->right == NULL)
		{
			TreeNode *temp = root->left;
			delete root;
			return temp;
		}
		// Two Child
		else
		{
			TreeNode *temp = findMin(root->right);
			root->data = temp->data;
			root->right = deleteNode(root->right, temp->data);
		}
			
	}


	return root;
}


int searchNode(TreeNode *root, int target)
{
	if (root == NULL) return 0;

	if (root->data == target) return 1;

	if (target < root->data)
	{
		int count = searchNode(root->left, target);

		if (count == 0) return 0;

		return count + 1;
	}
	else
	{
		int count = searchNode(root->right, target);

		if (count == 0) return 0;

		return count + 1;
	}
}

void preorder(TreeNode *root)
{
	if (root == NULL) return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void level_order(TreeNode *root)
{
	if (root == NULL) return;

	queue<TreeNode*> q;

	q.push(root);

	while(!q.empty())
	{
		TreeNode *current = q.front();
		q.pop();

		cout << current->data << " ";

		if (current->left != NULL)
			q.push(current->left);
		if (current->right != NULL)
			q.push(current->right);
	}
	cout << endl;
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

int sum_node(TreeNode *root)
{
	if (root == NULL) return 0;

	return root->data + sum_node(root->left) + sum_node(root->right);
}

int get_height(TreeNode *root)
{
	if (root == NULL) return 0;

	return 1 + max(get_height(root->left), get_height(root->right));
}
	

int free_tree(TreeNode *root)
{
	if (root == NULL) return 0;

	int left = free_tree(root->left);
	int right = free_tree(root->right);

	cout << root->data << " free." << endl;

	delete root;
	
	return left + right + 1;
}

int main(void)
{
	TreeNode *root = NULL;
	int menu;

	while(1)
	{
		cout << endl;
		cout << "1. Input" << endl;
		cout << "2. Search" << endl;
		cout << "3. Information" << endl;
		cout << "4. Delete" << endl;
		cout << "5. Exit" << endl;
		cout << "Menu: ";
		cin >> menu;

		if (menu == 5)
		{
			free_tree(root);
			return 0;
		}

		if (menu == 1)
		{
			int data;

			while(1)
			{
				cout << "Input (Down is -1): ";
				cin >> data;

				if (data == -1) break;

				root = insertNode(root, data);
			}
		}

		else if (menu == 2)
		{
			int target;
			int count = 0;

			cout << "Search Node: ";
			cin >> target;

			count = searchNode(root, target);

			if (count == 0)
			{
				cout << target << "is Not Found" << endl;
				break;
			}
			
			cout << target << "is" << count << endl;
		}	

		else if (menu == 3)
		{
			int node = count_node(root);
			int leaf = count_leaf(root);
			int sum = sum_node(root);
			int height = get_height(root);

			cout << "[Pre order]:";
		       	preorder(root);
			cout << endl;
			
			cout << "[Level order]:";
		       	level_order(root);
			cout << endl;

			cout << "[Total Node]:" << node << endl;		
			cout << "[Leaf Node]:" << leaf << endl;
			cout << "[Sum]:" << sum << endl;
			cout << "[Height]:" << height << endl;
		}

		else if (menu == 4)
		{
			int target;

			cout << "Delete Node: ";
			cin >> target;

			if (searchNode(root, target) == 0)
				cout << target << " is Not Found" << endl;
			else
			{
				root = deleteNode(root, target);
				cout << "[After Delete] ";
				preorder(root);
				cout << endl;
			}
		}

		else if (menu == 5)
		{
			int count = free_tree(root);

			cout << "Total " << count << " nodes free." << endl;
			cout << "[Exit]" << endl;

			root = NULL;

			return 0;

		}

	}

	return 0;
}


