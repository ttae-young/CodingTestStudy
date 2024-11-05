// # 문자열 밀기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* A, const char* B) 
{
    int answer = 0;
    int len = strlen(A);

    if (strcmp(A, B) == 0)
        return answer;

    for (int i = 0; i < len; i++)
    {
        char rot[len + 1];
        for (int j = 0; j < len; j++)
        {
            rot[j] = A[(len - i + j) % len];
        }
        rot[len] = '\0';

        if (strcmp(rot, B) == 0)
            answer = i;
        else
            answer = -1;
    }

    return answer;
}