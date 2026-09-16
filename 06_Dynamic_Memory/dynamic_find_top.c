#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char *name;
	int age;
	double score;
}Student;

Student *findTopStudent(Student *students, int size)
{
	Student *top = &students[0];

	for (int i = 0; i < size; i++)
	{
		if (students[i].score > top->score) top = &students[i];
	}
	
	return top;
}


int main(void)
{
	int size;
	printf("Student count: ");
	scanf("%d", &size);

	// malloc students
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

	printf("\n=== Top Students ===\n");

	Student *top = findTopStudent(students, size);

	printf("%s %d %.1f\n", top->name, top->age, top->score);
	
	// name free	
	for (int i = 0; i < size; i++)
		free(students[i].name);
		
	free(students);

	return 0;
}
