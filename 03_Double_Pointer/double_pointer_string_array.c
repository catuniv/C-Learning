#include <stdio.h>

int main(void)
{
	char *names[3] = {"Kim", "Lee", "Park"};
	char size = sizeof(names) / sizeof(names[0]);
	char **pptr = names;

	for (int i = 0; i < size; i++)
		printf("%s\n", *(pptr + i));

	return 0;
}
	
