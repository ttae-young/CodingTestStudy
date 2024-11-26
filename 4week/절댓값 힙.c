// # 11286

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int value;
}HeapNode;

HeapNode heap[100000];
int heap_size = 0;

int compare(int a, int b)
{
	int absA = abs(a), absB = abs(b);
	if (absA == absB)
		return a < b;
	return absA < absB;
}


void insert(int value)
{
	int i = ++heap_size; // ������ ��ġ�� ����
	while (i >1 && compare(x, heap[i / 2].value)) // �θ�� ��
	{
		heap[i] = heap[i / 2]; // �θ� �Ʒ��� �̵�
		i /= 2; // �ε����� �θ�� �̵�
	}
	heap[i].value = x; // ���� ��ġ�� �� ����
}

int delete_min()
{
	if (heap_size == 0)
		return 0; // ����ִٸ� 0 ��ȯ
	int min_value = heap[1].value; // �ּҰ� ����
	int temp = heap[heap_size--].value; // ������ ���� ������
	int parent = 1, child;

	while (parent * 2 <= heap_size) // �ڽ��� �ִ� ����
	{
		child = parent * 2; // ���� �ڽ�
		if (child <heap_size && compare(heap[child+1].value, heap[child].value)) // ������ �ڽ��� �� ������
			child++;
		if (compare(temp, heap[child].value))
			break; // �� ���� ���� �� ����

		heap[parent] = heap[child]; // �ڽ��� ���� �̵�
		parent = child; // �ε��� �̵�
	}
	heap[parent].value = temp; // ���� ��ġ�� �� ��ġ

	return min_value; // �ּҰ� ��ȯ
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