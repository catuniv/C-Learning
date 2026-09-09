#include <stdio.h>
#include <string.h>

void stringCopy(char *dest, const char *src)
{
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
	char src[] = "Embedded";
	char dest[20];

	stringCopy(dest, src);

	printf("src = %s\n", src);
	printf("dest = %s\n", dest);

	return 0;
}
