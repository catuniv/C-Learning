#include <stdio.h>

void selectName(char **selected, char *name)
{
	*selected = name;
}

int main(void)
{
	char *name1 = "Kim";
	char *name2 = "Hong";

	char *selected = name1;

	printf("before = %s\n", selected);

	selectName(&selected, name2);

	printf("after = %s\n", selected);

	return 0;
}
