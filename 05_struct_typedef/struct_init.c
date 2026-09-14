#include <stdio.h>
#include <string.h>

struct Student
{
	char name[20];
	int age;
	double score;
};

int main(void)
{
	struct Student s1 = {"Kim", 23, 87.5};
	struct Student s2 = {"Lee", 21, 92.0};
	struct Student s3 = {"Hong", 24, 78.5};

	printf("%s %d %.1f\n", s1.name, s1.age, s1.score);
	printf("%s %d %.1f\n", s2.name, s2.age, s2.score);
	printf("%s %d %.1f\n", s3.name, s3.age, s3.score);

	return 0;
}
