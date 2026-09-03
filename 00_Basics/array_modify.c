#include <stdio.h>

void addTen(int *numbers, int size)
{
	for (int i = 0; i < size; i++)
		numbers[i] =  *(numbers + i) + 10;
}

int main(void)
{
	int numbers[5];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("Input: ");

	for (int i = 0; i < 5; i++)
		scanf("%d", &numbers[i]);


	printf("Before: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);

		if (i == 4)
			printf("\n");

	}


	addTen(numbers, size);


	printf("After: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);

		if (i == 4)
			printf("\n");
	}

	return 0;
}	
	
