#include <stdio.h>

typedef struct
{
	char name[20];
	int age;
	double score;
}Student;

void printStudents(const Student *students, int size)
{
	const Student *ptr = students;
	
	for (int i = 0; i < size; i++)
	{
		printf("%s %d %.1f\n", ptr->name, ptr->age, ptr->score);
		ptr++;
	}

}

int main(void)
{
	Student students[] = {
		{"Kim", 23, 87.5},
		{"Lee", 21, 92.0},
		{"Hong", 24, 78.5}
	};

	int size = sizeof(students) / sizeof(students[0]);

	printStudents(students, size);

	return 0;
}
