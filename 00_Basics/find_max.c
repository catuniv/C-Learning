#include <stdio.h>

int findMax(int numbers[], int size)
{
	int max = numbers[0];

	for (int i = 1; i < size; i++)
		if (numbers[i] > max) max = numbers[i];
	
	return max;
}

int main()
{
	int numbers[5];
	
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("Input: ");
	
	for (int i = 0; i < 5; i++)
		scanf("%d", &numbers[i]);

	int max = findMax(numbers, size);

	printf("Max: %d\n", max);

	return 0;
}
