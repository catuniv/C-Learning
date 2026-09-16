#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char *name;
	int age;
	double score;
}Student;

int main(void)
{
	Student student;
	int length;

	printf("Name length: ");
	scanf("%d", &length);

	student.name = malloc(sizeof(char) * (length + 1));

	if (student.name == NULL) return 1;

	printf("Name Age Score: ");
	scanf("%s %d %lf", student.name, &student.age, &student.score);

	printf("\n=== Student ===\n");

	printf("%s %d %.1lf\n", student.name, student.age, student.score);

	free(student.name);
	
	return 0;
}
