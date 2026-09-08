#include <stdio.h>
#include <string.h>

int *findMaxPointer(int **ptrs, int size)
{
	int *max = ptrs[0];

	for (int i = 0; i < size; i++)
		if (*max < **(ptrs + i)) max = ptrs[i];

	return max;
}

void selectLonger(char **selected, char *a, char *b)
{
	if (strlen(a) > strlen(b)) *selected = a;
	else *selected = b;
}

void multiplyAll(int **ptrs, int size, int value)
{
	for (int i = 0; i < size; i++)
		**(ptrs + i) *= value;
}

void swapPointers(int **a, int **b)
{
	int *temp = NULL;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x = 10;
	int y = 50;
	int z = 30;

	int *px = &x;
	int *py = &y;

	int *ptrs[3] = {&x, &y, &z};

	int size = sizeof(ptrs) / sizeof(ptrs[0]);

	char *name1 = "Kim";
	char *name2 = "JaeHwan";
	
	char *selectedName = NULL;
	
	int *maxPtr = findMaxPointer(ptrs, size);

	selectLonger(&selectedName, name1, name2);

	multiplyAll(ptrs, size, 2);

	swapPointers(&px, &py);

	printf("max = %d\n", *maxPtr);
	printf("selected = %s\n", selectedName);
	printf("*px = %d\n", *px);
	printf("*py = %d\n", *py);

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}


