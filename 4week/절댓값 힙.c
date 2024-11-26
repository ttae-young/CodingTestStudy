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
	int i = ++heap_size; // 마지막 위치에 삽입
	while (i >1 && compare(x, heap[i / 2].value)) // 부모와 비교
	{
		heap[i] = heap[i / 2]; // 부모를 아래로 이동
		i /= 2; // 인덱스를 부모로 이동
	}
	heap[i].value = x; // 최종 위치에 값 삽입
}

int delete_min()
{
	if (heap_size == 0)
		return 0; // 비어있다면 0 반환
	int min_value = heap[1].value; // 최소값 저장
	int temp = heap[heap_size--].value; // 마지막 값을 가져옴
	int parent = 1, child;

	while (parent * 2 <= heap_size) // 자식이 있는 동안
	{
		child = parent * 2; // 왼쪽 자식
		if (child <heap_size && compare(heap[child+1].value, heap[child].value)) // 오른쪽 자식이 더 작으면
			child++;
		if (compare(temp, heap[child].value))
			break; // 힙 조건 만족 시 종료

		heap[parent] = heap[child]; // 자식을 위로 이동
		parent = child; // 인덱스 이동
	}
	heap[parent].value = temp; // 최종 위치에 값 배치

	return min_value; // 최소값 반환
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