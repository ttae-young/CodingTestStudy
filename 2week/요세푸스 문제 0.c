// # 11866

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	int que[1000];
	int front = 0; // ���� ������ �ε���
	int count = 0; // ����� �߰��� ��� ��

	for (int i = 0; i < n; i++)
	{
		front = (front + k - 1) % (n - i);
		que[count++] = arr[front];

		for (int j = front; j < n - i - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
	}

	printf("<");
	for (int i = 0; i < n; i++)
	{
		printf("%d", que[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf(">\n");
	return 0;
}