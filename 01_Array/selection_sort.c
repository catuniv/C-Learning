#include <stdio.h>

int main(void)
{

	// Variable Declaration
	int numbers[7];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	//Input
	printf("Input: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);

	//Before
	printf("Before: ");
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	printf("\n");

	//After
	printf("After: ");
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;

		for (int j = i + 1; j < size; j++)
		{
			if (numbers[j] < numbers[minIndex])
			{
				minIndex = j;
			}
		}
		//swap
		int temp = numbers[i];
		numbers[i] = numbers[minIndex];
		numbers[minIndex] = temp;
	}
	
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	return 0;
}
