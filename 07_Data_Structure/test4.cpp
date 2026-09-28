#include <iostream>
#include <string>
#include <stack>

using namespace std;

struct Node
{
	string data;
	Node *left, *right;
};

Node* AllocNewNode(string data)
{
	Node *newnode = new Node;

	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

void Preorder(Node *root)
{
	if (root == NULL) return;

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

void Inorder(Node *root)
{
	if (root == NULL) return;

	stack<Node*> s;

	Node *current = root;

	while(!s.empty() || current != NULL)
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

void Postorder(Node *root)
{
	if (root == NULL) return;

	stack<Node*> s1;
	stack<Node*> s2;

	s1.push(root);

	while (!s1.empty())
	{
		Node *current = s1.top();
		s1.pop();

		s2.push(current);

		if (current->left != NULL)
			s1.push(current->left);

		if (current->right != NULL)
			s1.push(current->right);

	}

	while(!s2.empty())
	{
		cout << s2.top()->data << " ";
		s2.pop();
	}
}

int main(void)
{
	Node *root = AllocNewNode("Kim");

	root->left = AllocNewNode("Lee");
	root->right = AllocNewNode("Park");

	root->left->left = AllocNewNode("Choi");
	root->left->right = AllocNewNode("Jung");

	root->right->right = AllocNewNode("Han");

	cout << "Preorder :";
	Preorder(root);
	cout << endl;
	
	cout << "Inorder :";
	Inorder(root);
	cout << endl;

	cout << "Postorder :";
	Postorder(root);
	cout << endl;
	return 0;
}
