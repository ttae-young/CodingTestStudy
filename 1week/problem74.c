// # 잘라서 배열로 저장하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_str, int n)
{
    int len = strlen(my_str);
    int part = (len + n - 1) / n;

    char** answer = (char**)malloc(sizeof(char*) * (part+1));

    for (int i = 0; i < part; i++)
    {
        int range = n;
        if (len < i * n + n)
        {
            range = len - i * n;
        }

        answer[i] = (char*)malloc(sizeof(char) * (range + 1));

        strncpy(answer[i], my_str + i * n, range);
        answer[i][range] = '\0';

    }

    return answer;
}