// # 12789

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int line[1000];
int stack[1000];

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &line[i]);
	}

	int current = 1;
	int top = -1;

	for (int i = 0; i < n; i++)
	{
		if (line[i] == current)
			current++;

		else
		{
			stack[++top] = line[i];
		}

		while (top >= 0 && stack[top] == current)
		{
			top--;
			current++;
		}
	}
	if (current > n)
		printf("Nice\n");
	else
		printf("Sad\n");

	return 0;
}