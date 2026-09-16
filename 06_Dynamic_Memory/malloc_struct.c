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
	Student *student = malloc(sizeof(Student));

	if (student == NULL) return 1;

	strcpy(student->name, "Kim");
	student->age = 23;
	student->score = 87.5;

	printf("Name: %s\n", student->name);
	printf("Age: %d\n", student->age);
	printf("Score: %.1f\n", student->score);

	free(student);

	return 0;
}
