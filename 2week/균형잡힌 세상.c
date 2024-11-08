// # 4949

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	while (1)
	{
		char str[102];
		fgets(str, sizeof(str), stdin);

		if (strcmp(str, ".\n") == 0)
			break;

		char stack[102];
		int top = -1;
		int found = 1;

		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == '(' || str[i] == '[')
				stack[++top] = str[i];
			else if (str[i] == ')')
			{
				if (top == -1 || stack[top] != '(')
				{
					found = 0;
					break;
				}
				top--;
			}
			else if (str[i] == ']')
			{
				if (top == -1 || stack[top] != '[')
				{
					found = 0;
					break;
				}
				top--;
			}
		}
		if (found && top == -1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}