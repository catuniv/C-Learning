#include <iostream>
using namespace std;
#define MAX 100

int Node[MAX][MAX];
int visited[MAX];
int v, e;
int count = 0;

void insert_edge(int a, int b)
{
	Node[a][b] = 1;
	Node[b][a] = 1;
}

void dfs(int virus)
{
	visited[virus] = 1;

	for (int i = 1; i <= v; i++)
	{
		if (Node[virus][i] == 1 && visited[i] == 0)
		{
			count++;
			dfs(i);
		}
	}
}


int main(void)
{
	int a, b;

	cin >> v;
	cin >> e;

	for (int i = 0; i < e; i++)
	{
		cin >> a >> b;
		insert_edge(a, b);
	}
	
	// virus = 1
	dfs(1);

	cout << count << endl;

	return 0;
}

