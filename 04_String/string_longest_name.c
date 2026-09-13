#include <stdio.h>

char *findLongestName(char **names, int size)
{
	char *longest = names[0];

	for (int i = 1; i < size; i++)
	{
		int currentLength = 0;
		int longestLength = 0;

		char *currentPtr = names[i];
		char *longestPtr = longest;

		while(*currentPtr != '\0')
		{
			currentLength++;
			currentPtr++;
		}

		while (*longestPtr != '\0')
		{
			longestLength++;
			longestPtr++;
		}

		if (longestLength < currentLength) longest = names[i];
	}
		return	longest;
}
		
int main(void)
{
	char *names[] = {
		"Kim",
		"Hong Jae Hwan",
		"Lee",
		"Park Min Su"
	};

	char *longest = findLongestName(names, 4);

	printf("Longest: %s\n", longest);

	return 0;
}
