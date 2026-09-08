#include <stdio.h>

int *findMaxPointer(int **pptr, int size)
{
	int *max = pptr[0];

	for (int i = 0; i < size; i++)
		if (*pptr[i] > *max) max = pptr[i];
		
	return max;
}

int main(void)
{
	int a = 10;
	int b = 80;
	int c = 40;

	int *ptrs[3] = {&a, &b, &c};
	int size = sizeof(ptrs) / sizeof(ptrs[0]);

	int *maxPtr = findMaxPointer(ptrs, size);

	printf("max = %d\n", *maxPtr);

	return 0;
}
