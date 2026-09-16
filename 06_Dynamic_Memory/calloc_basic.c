#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;

	printf("Size: ");
	scanf("%d", &size);

	int *numbers = calloc(size, sizeof(int));

	if (numbers == NULL) return 1;

	for (int i = 0; i < size; i++)
		printf("%d ", *(numbers + i));

	free(numbers);

	return 0;
}
