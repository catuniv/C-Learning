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
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (numbers[j] > numbers[j+1])
			{
				int temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	return 0;
}
