#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

int main(void)
{
	int size;

	printf("Size: ");
	scanf("%d", &size);

	Student *student = malloc(sizeof(Student) * size);

	if (student == NULL) return 1;

	for (int i = 0; i < size; i++)
	{
		printf("Name Age Score: ");
		scanf("%s %d %lf", student[i].name, &student[i].age, &student[i].score);
	}

	printf("\n");

	for (int i = 0; i < size; i++)
	{
		printf("%s %02d %.1f\n", student[i].name, student[i].age, student[i].score);
	}

	free(student);

	return 0;
}
	
