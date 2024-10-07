// # 배열 원소의 길이

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution(const char* strlist[], size_t strlist_len)
{
    int a = 0;
    int* answer = (int*)malloc(sizeof(int));
    for (int i = 0; i < strlist_len; i++)
    {
        answer[a++] = strlen(strlist[i]);
    }

    answer[a] = '\0';
    
    return answer;
}