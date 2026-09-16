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
		int nameLength;
		printf("Name length: ");
		scanf("%d", &nameLength);

		students[i].name = malloc(sizeof(char) * (nameLength + 1));

		if (students[i].name == NULL) return 1;

		printf("Name Age Score: ");
		scanf("%s %d %lf", students[i].name, &students[i].age, &students[i].score);

	}

	int deleteIndex;
	printf("Delete index: ");
	scanf("%d", &deleteIndex);

	// !!	
	free(students[deleteIndex].name);

	for (int i = deleteIndex; i < size - 1; i++)
		students[i] = students[i + 1];

	size--;

	Student *temp = realloc(students, sizeof(Student) * size);

	// !!
	if (temp != NULL) students = temp;


	for (int i = 0; i < size; i++)
		printf("%s %d %.1lf\n", students[i].name, students[i].age, students[i].score);

	for (int i = 0; i < size; i++)
		free(students[i].name);

	free(students);

	return 0;
}

		
