#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char *name;
	int age;
	double score;
} Student;

Student *findTopStudent(Student *students, int size)
{
	Student *top = &students[0];

	for (int i = 0; i < size; i++)
	{
		if (top->score < students[i].score) top = &students[i];
	}

	return top;
}

int main(void)
{
	Student *students = NULL;
	int size = 0;

	while(1)
	{
		int menu;
		printf("Menu\n");
		printf("1. Add Student\n");
		printf("2. Delete Student\n");
		printf("3. Print Student\n");
		printf("4. Find Top Student\n");
		printf("5. Exit\n\n");
		printf("Select: ");

		scanf("%d", &menu);

		switch(menu)
		{
			case 1:     
			{
				int nameLength;
				printf("Name length: ");
				scanf("%d", &nameLength);
				
				// !!	
				Student *temp = realloc(students, sizeof(Student) * (size + 1));

				if (temp == NULL)
				{
					printf("Memory allocation failed\n");
					break;
				}

				students = temp;				


				students[size].name = malloc(sizeof(char) * (nameLength + 1));
				if (students[size].name == NULL) return 1;

				printf("Name Age Score: ");
				scanf("%s %d %lf", students[size].name, &students[size].age, &students[size].score);

				printf("\n");

				size++;

				break;
			}

			case 2:
			{
				int deleteIndex;
				printf("Delete index: ");
				scanf("%d", &deleteIndex);

				if (deleteIndex < 0 || deleteIndex >= size)
				{
					printf("Not find Student\n");
					continue;
				}

				free(students[deleteIndex].name);

				for (int i = deleteIndex; i < size - 1; i++)
					students[i] = students[i + 1];

				size--;

				// !!				
				if (size == 0)
				{
					free(students);
					students = NULL;
				}

				Student *temp = realloc(students, sizeof(Student) * size);

				if (temp != NULL) students = temp;

				printf("Delete Complete\n");
				
				printf("\n");

				break;
			}

			case 3:
			{
				printf("\n=== Students ===\n");

				for (int i = 0; i < size; i++)
					printf("%s %d %.1lf\n", students[i].name, students[i].age, students[i].score);

				printf("\n");

				break;
			}

			case 4:
			{
				// !!
				if (size == 0)
				{
					printf("No students\n");
					break;
				}

				Student *top = findTopStudent(students, size);
				printf("\n === Top Student ===\n");
				printf("%s %d %.1lf\n", top->name, top->age, top->score);

				printf("\n");

				break;
			}

			case 5:
			{	for (int i = 0; i < size; i++)
					free(students[i].name);

				free(students);

				printf("Bye\n");
				return 0;
			}
			
			default:
			{
				printf("Invalid menu\n");
				break;
			}
		}
	}



	return 0;
}
