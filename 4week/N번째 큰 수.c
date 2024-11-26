// # 2075
#define _CRT_SECURE_CO_WARNINGS
#include <stdio.h>

int heap[1500 * 1500];
int heap_size = 0;

void inser(int value)
{
	int i = ++heap_size;
	while (i > 1 && heap[i / 2] > value)
	{
		heap[i] = heap[i / 2];
		i /= 2;
	}
	heap[i] = value;
}

int delete_min()
{
	int min_value = heap[1];
	int temp = heap[heap_size--];
	int parent = 1, child;

	while (parent * 2 <= heap_size)
	{
		child = parent * 2;
		if (child < heap_size && heap[child] > heap[child + 1])
		{
			child++;
		}
		if (temp <= heap[child])
		{
			break;
		}
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
		for (int j = 0; j < n; j++)
		{
			int x;
			scanf("%d", &x);

			if (heap_size < n)
			{
				insert(x);
			}
			else if (heap[1] < x)
			{
				delete_min();
				insert(x);
			}
		}
	}

	printf("%d\n", heap[1]);

	return 0;
}
