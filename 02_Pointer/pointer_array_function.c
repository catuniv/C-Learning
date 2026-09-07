#include <stdio.h>

void doubleArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*arr *= 2;
		arr ++;
	}
}

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	doubleArray(numbers, size);

	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);


	return 0;
}
