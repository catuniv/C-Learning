#include <stdio.h>

typedef struct Date
{
	int year;
	int month;
	int day;
}Date;

typedef struct Student
{
	char name[20];
	int age;
	double score;
	struct Date birth;
}Student;

int main(void)
{
	Student s1 = {
		"Kim",
		23,
		87.5,
		{2003, 05, 10}
	};

	Student *ptr = &s1;

	printf("Name: %s\n", ptr->name);
	printf("Score: %.1f\n", ptr->score);
	printf("Birth: %d-%02d-%02d\n", ptr->birth.year, ptr->birth.month, ptr->birth.day);

	return 0;
}
