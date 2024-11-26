// # 1927
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int heap[100001];
int heap_size = 0;

void insert(int value)
{
	int i = ++heap_size;
	while (i != 1 && value < heap[i / 2])
	{
		heap[i] = heap[i / 2];
		i /= 2;
	}
	heap[i] = value;
}

int delete_min()
{
	if (heap_size == 0)
		return 0;
	int min_value = heap[1];
	int temp = heap[heap_size--];
	int parent = 1, child;

	while (parent * 2 <= heap_size)
	{
		child = parent * 2;
		if (child <heap_size && heap[child] > heap[child + 1])
			child++;
		if (temp <= heap[child])
			break;

		heap[parent] = heap[child];
		parent = child;
	}
	heap[parent] = temp;

	return min_value;
}


int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);

		if (x == 0)
		{
			printf("%d\n", delete_min());
		}
		else
		{
			insert(x);
		}
	}
	return 0;
}
