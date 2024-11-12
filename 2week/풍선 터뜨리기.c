// # 2346

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int index;
	int value;
	struct Node* next;
	struct Node* prev;
} Node;

// ��� ���� �Լ�
Node* CreateNode(int index, int value)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

// �� �ʱ�ȭ �Լ�
Node* InitDeque(int n)
{
	Node* head = NULL;
	Node* tail = NULL;

	for (int i = 1; i <= n; i++)
	{
		int value;
		scanf("%d", &value);
		Node* newNode = CreateNode(i, value);

		if (head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}

	// ���� ����Ʈ�� ����
	head->prev = tail;
	tail->next = head;

	return head;
}

// ǳ���� �Ͷ߸��� ���� ���� �̵��ϴ� �Լ�
Node* PopBalloon(Node* node)
{
	printf("%d", node->index);

	// ǳ���� ����Ʈ���� ����
	node->prev->next = node->next;
	node->next->prev = node->prev;

	Node* nextNode = (node->value > 0) ? node->next : node->prev;
	free(node); // �޸� ����
	return nextNode;
}

int main()
{
	int n;
	scanf("%d", &n);

	Node* current = InitDeque(n); // �� �ʱ�ȭ

	for (int i = 1; i <= n; i++)
	{
		int move = current->value; // ���� ǳ���� �̵� ��
		current = PopBalloon(current);

		// ǳ�� �̵� (����� ������, ������ ����)
		for (int j = 1; j < abs(move); j++)
		{
			current = (move > 0) ? current->next : current->prev;
		}
	}
	return 0;
}