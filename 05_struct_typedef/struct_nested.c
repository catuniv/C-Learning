#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Student
{
	char name[20];
	int age;
	double score;
	struct Date birth;
};

int main(void)
{
	struct Student s1 = {"Kim", 23, 87.5, {2003, 5, 10}};

	printf("Name: %s\n", s1.name);
	printf("Score: %.1f\n", s1.score);
	printf("Birth: %d-%d-%d\n", s1.birth.year, s1.birth.month, s1.birth.day);

	return 0;
}
