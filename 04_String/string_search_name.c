#include <stdio.h>

int findName(char **name, int size, const char *target)
{
	for (int i = 0; i < size; i++)
	{
		char *p1 = name[i];
		const char *p2 = target;

		while(*p1 != '\0' && *p2 != '\0')
		{
			if (*p1 != *p2) break;

			p1++;
			p2++;
		}

		if (*p1 == '\0' && *p2 == '\0') return i;

	}

	return -1;
}
		

int main(void)
{
	char *names[] = {
		"Kim",
		"Hong Jae Hwan",
		"Lee",
		"Park Min Su"
	};

	int index = findName(names, 4, "Lee");

	printf("Index = %d\n", index);

	return 0;
}
