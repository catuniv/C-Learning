#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;

	printf("Size: ");
	scanf("%d", &size);

	int *numbers = malloc(sizeof(int)*size);

	if (numbers == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);

	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	printf("\n");

	free(numbers);

	return 0;
}
