#include <stdio.h>

int main(void)
{
	char name[100];
	char *ptr = name;

	printf("Input: ");

	fgets(name, sizeof(name), stdin);

	while (*ptr != '\n' && *ptr != '\0') ptr++;

	*ptr = '\0';

	printf("Output: %s", name);

	return 0;
}
