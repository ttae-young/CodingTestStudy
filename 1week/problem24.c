// # 문자 반복 출력하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n)
{
    int length = strlen(my_string);
    int a = 0;

    char* answer = (char*)malloc((length * n) * sizeof(char));

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < n; j++)
        {
            answer[a++] = my_string[i];
        }
    }

    answer[a] = '\0';

    return answer;
}