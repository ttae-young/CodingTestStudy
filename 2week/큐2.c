// # 18258

#include <stdio.h>
#include <string.h>
int arr[2000000];

int main()
{
	int n, a;
	char op[10];
	int j = 0; //≥°
	int k = 0; //Ω√¿€
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s", op, sizeof(op));
		if (strcmp(op, "push") == 0)
		{
			scanf_s("%d", &a);
			arr[j++] = a;
		}
		else if (strcmp(op, "front") == 0)
		{
			if (j == k)
				printf("-1\n");
			else
			{
				printf("%d\n", arr[k]);
			}
		}
		else if (strcmp(op, "back") == 0)
		{
			if (j == k)
				printf("-1\n");
			else
			{
				printf("%d\n", arr[j - 1]);
			}
		}
		else if (strcmp(op, "empty") == 0)
		{
			if (j == k)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(op, "pop") == 0)
		{
			if (j == k)
				printf("-1\n");
			else
			{
				printf("%d\n", arr[k++]);
			}
		}
		else if (strcmp(op, "size") == 0)
		{
			printf("%d\n", j - k);
		}
	}
	return 0;
}