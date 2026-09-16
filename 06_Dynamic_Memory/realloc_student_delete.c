#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

int main(void)
{
	int size = 4;

	Student *students = malloc(sizeof(Student) * size);
	
	if (students == NULL) return 1;

	students[0] = (Student){"Kim", 23, 87.5};
	students[1] = (Student){"Lee", 21, 92.0};
	students[2] = (Student){"Hong", 24, 78.5};
	students[3] = (Student){"Park", 22, 96.5};


	int deleteIndex = 1;

	for (int i = deleteIndex; i < size - 1; i++)
		students[i] = students[i + 1];
		

	size--;

	Student *temp = realloc(students, sizeof(Student) * size);

	if (temp == NULL) return 1;

	students = temp;

	for (int i = 0; i < size; i++)
		printf("%s %d %.1f\n", students[i].name, students[i].age, students[i].score);

	free(students);

	return 0;
}
