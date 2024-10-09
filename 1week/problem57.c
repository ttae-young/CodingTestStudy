// # 영어가 싫어요
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


long long solution(const char* numbers) 
{
	const char* dig[] = {
		"zero", "one", "two", "three", "four",
		"five", "six", "seven", "eight", "nine"
	};
	long long answer = 0;
	char result[50] = "";
	int len = strlen(numbers);

	for (int i = 0; i < len;)
	{
		for (int j = 0; j < 10; j++)
		{
			int word_len = strlen(dig[j]);
			
			if (strncmp(numbers + i, dig[j], word_len) == 0)
			{
				char dig_char[2];
				sprintf(dig_char, "%d", j);
				strcat(result, dig_char);
				i += word_len;
				break;
			}
		}
	}

	answer = atoll(result);

	return answer;
}