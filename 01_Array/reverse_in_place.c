#include <stdio.h>

int main(void)
{
	int numbers[7];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("Input: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);


	printf("Before: ");
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	printf("\n");


	// After
	for (int i = 0; i < (size / 2); i++)
	{	
		int temp = numbers[i];
		numbers[i] = numbers[size-1-i];
		numbers[size-1-i] = temp;	
	}

	

	printf("After: ");
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	printf("\n");

	return 0;
}
