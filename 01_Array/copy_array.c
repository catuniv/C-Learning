#include <stdio.h>

int main(void)
{
	int original[5];
	int copied[5];
	int size = sizeof(original) / sizeof(original[0]);

	printf("Input: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &original[i]);


	for (int i = 0; i < size; i++)
		copied[i] = original[i];

	for (int i = 0; i < size; i++)
		copied[i] += 10;

	printf("Original: ");
	for (int i = 0; i < size; i++)
		printf("%d ", original[i]);

	printf("\n");

	printf("Copied: ");
	for (int i = 0; i < size; i++)
		printf("%d ", copied[i]);

	printf("\n");

	return 0;
}	
