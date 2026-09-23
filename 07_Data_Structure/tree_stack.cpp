#include <iostream>
#include <stack>

using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

// * L R
void preorder(Node *root)
{
	if (root == NULL)
		return;

	stack<Node*> s;

	s.push(root);

	while(!s.empty())
	{
		Node *current = s.top();
		s.pop();


		cout << current->data << " ";

		if (current->right != NULL)
			s.push(current->right);
			

		if (current->left != NULL)
			s.push(current->left);

	}
}

// L * R 1 4 15 16 20 25
void inorder(Node *root)
{
	if (root == NULL) return;

	stack<Node*> s;
	
	Node *current = root;

	while(current != NULL || !s.empty())
	{
		while(current != NULL)
		{
			s.push(current);		
			current = current->left;
		}
		
		current = s.top();
		s.pop();
		
		cout << current->data << " ";

		current = current->right;

	}
}

// L R * 1 4 16 25 20 15
void postorder(Node *root);

int main()
{
	// 15, 20, 25, 16, 4, 1
	Node n1 = {1, NULL, NULL};
	Node n2 = {4, &n1, NULL};
	Node n3 = {16, NULL, NULL};
	Node n4 = {25, NULL, NULL};
	Node n5 = {20, &n3, &n4};
	Node n6 = {15, &n2, &n5};

	Node *root = &n6;

	cout << "Preorder: " << endl;
	preorder(root);
	cout << endl;

	cout << "Inorder: " << endl;
	inorder(root);
	cout << endl;

/*	cout << "Postorder: " << endl;
	postorder(root);
	cout << endl;
	*/

	return 0;
}




