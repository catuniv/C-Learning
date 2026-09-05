#include <stdio.h>

int main(void)
{
	int numbers[7];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	printf("Input: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);

	printf("Duplicate: ");
	for (int i = 0; i < size; i++)
	{
		int alreadySeen = 0;

		// alreadySeen
		for (int k = 0; k < i; k++)
		{
			if (numbers[k] == numbers[i])
			{
				alreadySeen = 1;
				break;
			}
		}

		if (alreadySeen == 1)
			continue;

		for (int j = i+1; j < size; j++)
		{
			if (numbers[i] == numbers[j])
			{
				printf("%d ", numbers[i]);
				break;
			}
		}
	}

	printf("\n");
	
	return 0;
}
