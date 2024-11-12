// # 2164

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int que[500000];

int main()
{
	int n;
	int front = 0, rear;
	// front: ���� ť���� ù ��° ī�� ��ġ
	// rear: ������ �߰��� ī�� ��ġ
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		que[i] = i + 1;
		rear = n - 1;
	}

	while (1)
	{
		front = (front + 1) % n;
		if (rear == front)
			break;

		rear = (rear + 1) % n;
		que[rear] = que[front];
		front = (front + 1) % n;
		if (rear == front)
			break;
	}
	printf("%d\n", que[rear]);

	return 0;
}