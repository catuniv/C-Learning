#include <stdio.h>
#define MAX 1001
int visited[MAX];
int graph[MAX][MAX];
int queue[MAX];
int N, M, V;

void dfs(int v)
{
	visited[v] = 1;
	printf("%d", v);

	for (int i = 0; i <= N; i++)
	{
		if (graph[v][i] == 1 && visited[i] == 0)
			dfs(i);
	}
}

void bfs(int v)
{
	int front = 0;
	int rear = 0;

	queue[rear++] = v;
	visited[v] = 1;

	while(front < rear)
	{
		int current = queue[front++];

		printf("%d", current);

		for (int i = 1; i <= N; i++)
		{
			if (graph[current][i] == 1 && visited[i] == 0)
			{
				visited[i] = 1;
				queue[rear++] = i;
			}
		}
	}
}

int main(void)
{
	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0; i < M; i++)
	{
		int a, b;

		scanf("%d %d", &a, &b);

		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	dfs(V);

	printf("\n");

	for (int i = 1; i <= N; i++)
		visited[i] = 0;

	bfs(V);
	printf("\n");

	return 0;
}
