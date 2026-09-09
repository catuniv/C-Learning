#include <stdio.h>
#include <string.h>

int stringCompare(const char *a, const char *b)
{
	while(*a != '\0' && *b != '\0')
	{
		if (*a != *b) return *a - *b;

		a++;
		b++;
	}

	return *a - *b;
}

int main(void)
{
	char str1[] = "apple";
	char str2[] = "apply";

	int result = stringCompare(str1, str2);

	printf("result = %d\n", result);

	return 0;
}
