#include <stdio.h>
#include <string.h>

void selectMax(int **selected, int *a, int *b)
{
	if (*a > *b) *selected = a;
	else *selected = b; 
}

void multiplyAll(int **ptrs, int size, int value)
{
	for (int i = 0; i < size; i++)
		**(ptrs + i) *= value;
}

char *findLongest(char **names, int size)
{
	char *longest = names[0];

	for (int i = 0; i < size; i++)
		if (strlen(longest) < strlen(names[i])) longest = names[i];

	return longest;
}

int main(void)
{
	int a = 10;
	int b = 40;
	int c = 25;

	int *selected = NULL;

	int *ptrs[3] = {&a, &b, &c};
	int size = sizeof(ptrs) / sizeof(ptrs[0]);

	char *names[] = {
		"Kim",
		"Hong",
		"JaeHwan",
		"Lee"
	};

	int nameSize = sizeof(names) / sizeof(names[0]);

	selectMax(&selected, &a, &b);

	multiplyAll(ptrs, size, 2);

	char *longest = findLongest(names, nameSize);

	printf("selected = %d\n", *selected);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("longest = %s\n", longest);

	return 0;
}
