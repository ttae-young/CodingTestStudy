// # 28278

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000000];

int main()
{
	int n, command, o;
	scanf("%d", &n);
	int j = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &command);

		switch (command)
		{
		case 1:
			scanf("%d", &o);
			arr[j++] = o;
			break;
		case 2:
			if (j <= 0)
				printf("-1\n");
			else
			{
				printf("%d\n", arr[j - 1]);
				arr[j - 1] = 0;
				j--;
			}
			break;
		case 3:
			printf("%d\n", j);
			break;
		case 4:
			if (j == 0)
				printf("1\n");
			else
				printf("0\n");
			break;
		case 5:
			if (j != 0)
				printf("%d\n", arr[j - 1]);
			else
				printf("-1\n");
		}

	}
	return 0;
}