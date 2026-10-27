#include <iostream>
using namespace std;

#define MAX 100
int graph[MAX][MAX];
int visited[MAX];

void insert_edge(int start, int end)
{
	graph[start][end] = 1;
	graph[end][start] = 1;
}

void print_graph(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << graph[i][j] << " ";
		cout << endl;
	}
}

int main(void)
{
	int n = 5;

	insert_edge(0, 1);
	insert_edge(0, 3);
	insert_edge(1, 2);
	insert_edge(2, 3);
	insert_edge(2, 4);
	insert_edge(3, 4);

	print_graph(n);

	return 0;
}	


