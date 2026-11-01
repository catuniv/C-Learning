#include <stdio.h>
#define MAX 10

typedef struct Graph
{
	int n;
	int adj[MAX][MAX];
}Graph;

int visited[MAX];
int count = 0;

void init(Graph *g)
{
	g->n = 0;

	for (int i = 0; i < MAX; i++)
	{
		visited[i] = 0;

		for (int j = 0; j < MAX; j++)
			g->adj[i][j] = 0;
	}
}

void insert_vertex(Graph *g)
{
	if (g->n >= MAX - 1)
		return;

	g->n++;
}

void insert_edge(Graph *g, int n1, int n2)
{
	if (n1 > g->n || n2 > g->n)
		return;

	g->adj[n1][n2] = 1;
	g->adj[n2][n1] = 1;
}

void dfs(Graph *g, int v)
{
	visited[v] = 1;
	count++;

	for (int i = 1; i <= g->n; i++)
	{
		if (g->adj[v][i] == 1 && visited[i] == 0)
			dfs(g, i);
	}
}


int main(void)
{
	Graph g;
	init(&g);

	int vertex;
	int edge;
	int n1, n2;

	scanf("%d", &vertex);
	scanf("%d", &edge);

	for (int i = 0; i < vertex; i++)
		insert_vertex(&g);

	for (int i = 0; i < edge; i++)
	{
		scanf("%d %d", &n1, &n2);
		insert_edge(&g, n1, n2);
	}

	dfs(&g, 1);

	printf("%d\n", count - 1);

	return 0;
}


