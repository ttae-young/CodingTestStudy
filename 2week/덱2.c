// # 28279

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 1000000
int arr[MAX];
int front = 0;
int rear = 0;
int size = 0;

void push_front(int x)
{
	front = (front - 1 + MAX) % MAX;
	arr[front] = x;
	size++;
}

void push_back(int x)
{
	arr[rear] = x;
	rear = (rear + 1) % MAX;
	size++;
}

int pop_front()
{
	if (size == 0)
		return -1;
	int val = arr[front];
	front = (front + 1) % MAX;
	size--;
	return val;
}

int pop_back()
{
	if (size == 0)
		return -1;
	rear = (rear - 1 + MAX) % MAX;
	int val = arr[rear];
	size--;
	return val;
}

int get_front()
{
	if (size == 0)
		return -1;
	return arr[front];
}

int get_back()
{
	if (size == 0)
		return -1;
	return arr[(rear - 1 + MAX) % MAX];
}

int is_empty()
{
	return size == 0 ? 1 : 0;
}

int get_size()
{
	return size;
}


int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int command;
		scanf("%d", &command);

		switch (command)
		{
		case 1:
		{
			int x;
			scanf("%d", &x);
			push_front(x);
			break;
		}
		case 2:
		{
			int x;
			scanf("%d", &x);
			push_back(x);
			break;
		}
		case 3:
		{
			printf("%d\n", pop_front());
			break;
		}
		case 4:
		{
			printf("%d\n", pop_back());
			break;
		}
		case 5:
		{
			printf("%d\n", get_size());
			break;
		}
		case 6:
		{
			printf("%d\n", is_empty());
			break;
		}
		case 7:
		{
			printf("%d\n", get_front());
			break;
		}
		case 8:
		{
			printf("%d\n", get_back());
			break;
		}
		}

	}
	return 0;
}