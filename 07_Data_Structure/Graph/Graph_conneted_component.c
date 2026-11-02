#include <stdio.h>
#define MAX 1001
int graph[MAX][MAX];
int visited[MAX];
int N, M;

void dfs(int v)
{
	visited[v] = 1;

	for (int i = 1; i <= N; i++)
	{
		if (graph[v][i] == 1 && visited[i] == 0)
			dfs(i);
	}
}

int main(void)
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int u, v;

		scanf("%d %d", &u, &v);

		graph[u][v] = 1;
		graph[v][u] = 1;
	}

	int count = 0;

	for (int i = 1; i <= N; i++)
	{
		if (visited[i] == 0)
		{
			dfs(i);
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
