#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length;

	printf("Name length: ");
	scanf("%d", &length);

	char *name;

	name = malloc(sizeof(char) * length + 1);

	if (name == NULL) return 1;

	printf("Name: ");
	scanf("%s", name);

	printf("Your name: %s\n", name);

	free(name);

	return 0;
}

	
