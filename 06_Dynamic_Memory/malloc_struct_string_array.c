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
	int size;

	printf("Student count: ");
	scanf("%d", &size);

	Student *students = malloc(sizeof(Student) * size);

	if (students == NULL) return 1;

	for (int i = 0; i < size; i++)
	{
		students[i].name = malloc(sizeof(char) * 20);
		if (students[i].name == NULL) return 1;
		
		printf("Name Age Score: ");
		scanf("%s %d %lf", students[i].name, &students[i].age, &students[i].score);

	}

	printf("\n=== Students ===\n");

	for (int i = 0; i < size; i++)
		printf("%s %d %.1lf\n", students[i].name, students[i].age, students[i].score);

	for (int i = 0; i < size; i++)
		free(students[i].name);

		free(students);


	return 0;
}
