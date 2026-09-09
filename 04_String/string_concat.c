#include <stdio.h>
#include <string.h>

void stringConcat(char *dest, const char* src)
{
	while(*dest != '\0')
		dest++;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	
	*dest = '\0';
}


int main(void)
{
	char dest[30] = "Hello ";
	char src[] = "World";

	stringConcat(dest, src);

	printf("%s\n", dest);

	return 0;
}
