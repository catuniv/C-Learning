#include <stdio.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

int main(void)
{
	struct Student students[3] = {{"Kim", 23, 87.5}, {"Lee", 21, 92.0}, {"Hong", 24, 78.5}};

	int size = sizeof(students) / sizeof(students[0]);

	for (int i = 0; i < size; i++)
		printf("%s %d %.1f\n", students[i].name, students[i].age, students[i].score);

	
	return 0;
}
