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

// 노드 생성 함수
Node* CreateNode(int index, int value)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

// 덱 초기화 함수
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

	// 원형 리스트로 연결
	head->prev = tail;
	tail->next = head;

	return head;
}

// 풍선을 터뜨리고 다음 노드로 이동하는 함수
Node* PopBalloon(Node* node)
{
	printf("%d", node->index);

	// 풍선을 리스트에서 제거
	node->prev->next = node->next;
	node->next->prev = node->prev;

	Node* nextNode = (node->value > 0) ? node->next : node->prev;
	free(node); // 메모리 해제
	return nextNode;
}

int main()
{
	int n;
	scanf("%d", &n);

	Node* current = InitDeque(n); // 덱 초기화

	for (int i = 1; i <= n; i++)
	{
		int move = current->value; // 현재 풍선의 이동 값
		current = PopBalloon(current);

		// 풍선 이동 (양수는 오른쪽, 음수는 왼쪽)
		for (int j = 1; j < abs(move); j++)
		{
			current = (move > 0) ? current->next : current->prev;
		}
	}
	return 0;
}