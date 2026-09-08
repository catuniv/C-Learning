#include <stdio.h>
#include <string.h>

char *findLongest(char **name, int size)
{
	char *longest = name[0];

	for (int i = 0; i < size; i++)
		if (strlen(name[i]) > strlen(longest)) longest = name[i];

	return longest;
}

int main(void)
{
	char *names[] = {
		"Kim",
		"Hong",
		"JaeHwan",
		"Lee"
	};

	int size = sizeof(names) / sizeof(names[0]);

	char *longest = findLongest(names, size);

	printf("longest = %s\n", longest);

	return 0;
}
