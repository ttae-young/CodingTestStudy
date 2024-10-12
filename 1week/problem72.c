// # 문자열 정리하기 (2)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* solution(const char* my_string)
{
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(len+1));

    for (int i = 0; i < len; i++)
    {
        answer[i] = tolower(my_string[i]);
    }

    for (int j = 0; j < len-1; j++)
    {
        for (int t = j+1; t < len; t++)
        {
            if (answer[j] > answer[t])
            {
                int temp = answer[j];
                answer[j] = answer[t];
                answer[t] = temp;
            }
        }
    }
    answer[len] = '\0';

    return answer;
}