// # 9012

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char vps[51];
		scanf("%s", vps);

		int len = strlen(vps);
		int balance = 0;

		for (int t = 0; t < len; t++)
		{
			if (vps[t] == '(')
			{
				balance++;
			}
			else if (vps[t] == ')')
			{
				balance--;
			}

			if (balance < 0)
			{
				printf("NO\n");
				break;
			}
		}

		if (balance == 0)
			printf("YES\n");
		else if (balance > 0)
			printf("NO\n");

	}
	return 0;
}