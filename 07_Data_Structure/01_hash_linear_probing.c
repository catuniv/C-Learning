#include <stdio.h>

#define TABLE_SIZE 10

int table[TABLE_SIZE];

int hash(int key)
{
	return key % TABLE_SIZE;
}

void insert(int key)
{
	int index = hash(key);

	while(table[index] != 0)
		index = (index + 1) % TABLE_SIZE;

	table[index] = key;

}

void printTable()
{
	for (int i = 0; i < TABLE_SIZE; i++)
		printf("[%d] = %d\n", i, table[i]);
}

int main(void)
{
	insert(23);
	insert(33);
	insert(43);
	insert(17);
	insert(27);

	printTable();

	return 0;
}
