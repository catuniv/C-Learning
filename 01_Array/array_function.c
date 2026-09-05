#include <stdio.h>

int getSum(int *numbers, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += numbers[i];

	return sum;
}

int findMax(int *numbers, int size)
{
	int max = numbers[0];

	for (int i = 1; i < size; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];

	}

	return max;
}

int main(void)
{
	int numbers[5];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("Input: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);

	int sum = getSum(numbers, size);
	int max = findMax(numbers, size);

	printf("Sum: %d\n", sum);
	printf("Max: %d\n", max);

	return 0;
}
