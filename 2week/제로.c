// # 10773

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[100000];

int main()
{
	int k, op;
	int j = 0;

	scanf("%d", &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &op);
		if (op == 0)
		{
			arr[j - 1] = 0;
			j--;
		}
		else
		{
			arr[j++] = op;
		}
	}

	int sum = 0;

	for (int i = 0; i < k; i++)
	{
		sum += arr[i];
	}

	printf("%d", sum);
	return 0;
}