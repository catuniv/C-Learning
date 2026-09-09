#include <stdio.h>

int countChar(const char *str, char target)
{
	int count = 0;

	while(*str != '\0')
	{
		if (*str == target) count++;

		str++;
	}

	return count;
}

int main(void)
{
	char str[] = "banana";

	int count = countChar(str, 'a');

	printf("count = %d\n", count);

	return 0;
}
