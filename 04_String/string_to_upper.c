#include <stdio.h>

void toUpperString(char *str)
{
	while(*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			str++;
		}
		else str++;
	}
}

int main(void)
{
	char str[] = "Hello World";

	toUpperString(str);

	printf("%s\n", str);

	return 0;
}
