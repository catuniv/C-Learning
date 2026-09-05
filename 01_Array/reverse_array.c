#include <stdio.h>

int main(void)
{
	int numbers[7];
	int size = sizeof(numbers) / sizeof(numbers[0]);

	for (int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);


	printf("Original: ");
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);
	
	printf("\n");

	printf("Reverse: ");
	for (int i = size-1; i >= 0; i--)
	       	  printf("%d ", numbers[i]);

	printf("\n");

	return 0;
}
