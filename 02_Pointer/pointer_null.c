#include <stdio.h>

int main(void)
{
	int number = 100;
	int *ptr = NULL;

	if (ptr == NULL) printf("Ptr is NULL\n");
	else	printf("%d\n", *ptr);

	ptr = &number;

	if (ptr == NULL) printf("Ptr is NULL\n");
	else	printf("%d\n", *ptr);
	
	return 0;
}
