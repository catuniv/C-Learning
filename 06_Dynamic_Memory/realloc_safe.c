#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	int addSize;

	printf("Initial size: ");
	scanf("%d", &size);

	int *numbers = malloc(sizeof(int) * size);

	if (numbers == NULL) return 1;

	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);

	printf("Add size: ");
	scanf("%d", &addSize);

	int newSize = size + addSize;

	int *temp = realloc(numbers, sizeof(int) * newSize);

	if (temp  == NULL)
	{
		free(numbers);
		return 1;
	}

	numbers = temp;

	for (int i = size; i < newSize; i++)
		scanf("%d", &numbers[i]);


	for (int i = 0; i < newsize; i++)
		printf("%d ", *(numbers + i));

	free(numbers);

	return 0;
}
