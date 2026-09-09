#include <stdio.h>

char *findChar(char *str, char target)
{
	while(*str != '\0')
	{
		if (*str == target)
			return str;

		str++;
	}
	
	return NULL;
}

int main(void)
{
	char str[] = "Embedded";
	
	char *found = findChar(str, 'b');

	if (found != NULL) printf("Found = %s\n", found);
	else printf("Not Found\n");

	return 0;
}
