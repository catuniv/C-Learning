#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *ptrs[3] = {&a, &b, &c};
	int size = sizeof(ptrs) / sizeof(ptrs[0]);

	int **pptr = ptrs;

	for (int i = 0; i < size; i++)
		printf("%d ", **(pptr + i));

	printf("\n");

	return 0;
}


