#include <stdio.h>
#define MAX 10

typedef struct
{
	int data[MAX];
	int size;
}MaxHeap;

void initHeap(MaxHeap *heap)
{
	heap->size = 0;
}

int isEmpty(MaxHeap *heap)
{
	if (heap->size == 0)
		return 1;
	return 0;
}

int isFull(MaxHeap *heap)
{
	if (heap->size == MAX)
		return 1;
	return 0;
}

void insert(MaxHeap *heap, int data)
{
	if(isFull(heap))
	{
		printf("Heap is Full\n");
		return;
	}
	
	int i = heap->size;

	heap->data[i] = data;
	heap->size++;

	while(i > 0)
	{
		int parent = (i - 1) / 2;

		if (heap->data[parent] >= heap->data[i])
			break;

		int temp = heap->data[parent];
		heap->data[parent] = heap->data[i];
		heap->data[i] = temp;

		i = parent;
	}
}



int deleteMax(MaxHeap *heap)
{
	if (isEmpty(heap))
	{
		printf("Heap is Empty\n");
		return -1;
	}	

	int maxValue = heap->data[0];

	heap->size--;
	heap->data[0] = heap->data[heap->size];

	int i = 0;

	while(1)
	{
		int left = i * 2 + 1;
		int right = i * 2 + 2;
		int largest = i;

		if (left < heap->size && heap->data[left] > heap->data[largest])
			largest = left;

		if (right < heap->size && heap->data[right] > heap->data[largest])
			largest = right;

		if (largest == i)
			break;

		int temp = heap->data[i];
		heap->data[i] = heap->data[largest];
		heap->data[largest] = temp;

		i = largest;
	}

	return maxValue;
}

int main(void)
{

	MaxHeap heap;

	initHeap(&heap);

	insert(&heap, 50);
	insert(&heap, 30);
	insert(&heap, 40);
	insert(&heap, 60);
	insert(&heap, 20);
	insert(&heap, 70);

	printf("Delete: %d\n", deleteMax(&heap));
	printf("Delete: %d\n", deleteMax(&heap));
	printf("Delete: %d\n", deleteMax(&heap));
	printf("Delete: %d\n", deleteMax(&heap));
	printf("Delete: %d\n", deleteMax(&heap));
	printf("Delete: %d\n", deleteMax(&heap));

	return 0;
}
