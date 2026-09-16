#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int *numbers = malloc(sizeof(int) * 3);

	if (numbers == NULL) return 1;


	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;

	numbers = realloc(numbers, sizeof(int)*5);

	numbers[3] = 40;
	numbers[4] = 50;

	for (int i = 0; i < 5; i++)
		printf("%d ", *(numbers + i));

	free(numbers);

	return 0;
}
