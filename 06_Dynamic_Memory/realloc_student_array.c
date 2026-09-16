#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	int age;
	double score;
} Student;

int main(void)
{
	int size;
	printf("Stduent count: ");
	scanf("%d", &size);

	Student *students = malloc(sizeof(Student) * size);

	if (students == NULL) return 1;

	for (int i = 0; i < size; i++)
	{
		printf("Name Age Score: ");
		scanf("%s %d %lf", students[i].name, &students[i].age, &students[i].score);
	}

	int addSize;	
	printf("Add count: ");
	scanf("%d", &addSize);

	int newSize = addSize + size;

	Student *temp = realloc(students, sizeof(Student) * newSize);

	if (temp == NULL) 
	{
		free(students);
		return 1;
	}

	students = temp;

	for (int i = size; i < newSize; i++)
	{
		printf("Name Age Score: ");
		scanf("%s %d %lf", students[i].name, &students[i].age, &students[i].score);
	}

	printf("\n=== Students ===\n");

	
	for (int i = 0; i < newSize; i++)
		printf("%s %d %.1lf\n", students[i].name, students[i].age, students[i].score);

	free(temp);

	return 0;
}
		
