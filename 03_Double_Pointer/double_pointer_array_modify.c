#include <stdio.h>

void multiplyAll(int **pptr, int size)
{
	for (int i = 0; i < size; i++)
		**(pptr + i) *= 10;
}


int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *ptrs[3] = {&a, &b, &c};
	int size = sizeof(ptrs) / sizeof(ptrs[0]);

	multiplyAll(ptrs, size);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	return 0;
}
