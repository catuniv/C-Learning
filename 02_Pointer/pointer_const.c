#include <stdio.h>

int sumArray(const int *arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += *(arr + i);

	return sum;
}

int main(void)
{
	int numbers[5] = {10, 20, 30, 40, 50};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	int sum = sumArray(numbers, size);

	printf("sum = %d\n", sum);


	return 0;
}
