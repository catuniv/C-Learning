#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
	int data;
	struct ListNode *next;
}ListNode;

void insertLast(ListNode **head, int data)
{
	ListNode *newnode = malloc(sizeof(ListNode));

	newnode->data = data;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return;
	}

	ListNode *temp = *head;

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return;
}

void deleteNode(ListNode **head, int target)
{
	ListNode *temp = *head;
	ListNode *prev = NULL;

	while(temp != NULL)
	{
		if (temp->data == target)
		{
			if (temp == *head)
			{
				*head = (*head)->next;
				free(temp);
				return;
			}
			else
			{
				prev->next = temp->next;
				free(temp);
				return;
			}


			prev = temp;			
			temp = temp->next;
		}
	}
}

	
	

void printList(ListNode *head)
{
	ListNode *temp = head;

	while(temp != NULL)
	{
		printf("%d -> ", temp->data);
		temp = temp->next;
	}

	printf("NULL\n");
}


void freeList(ListNode *head)
{
	while(head != NULL)
	{
		ListNode *temp = head;

		head = temp->next;

		free(temp);

	}
}


int main(void)
{
	ListNode *head = NULL;

	insertLast(&head, 30);
	insertLast(&head, 10);
	insertLast(&head, 50);
	insertLast(&head, 20);

	printList(head);

	deleteNode(&head, 30);

	printList(head);

	freeList(head);

	return 0;
}
