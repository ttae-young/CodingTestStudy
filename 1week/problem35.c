// # 가위 바위 보

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* rsp) 
{
    int length = strlen(rsp);
    char* answer = (char*)malloc(sizeof(char)*length);
    int a = 0;

    for (int i = 0; i < length; i++)
    {
        if (rsp[i] == '2')
            answer[i] = '0';
        else if (rsp[i] == '5')
            answer[i] = '2';
        else
            answer[i] = '5';
    }
    answer[length] = '\0';

    return answer;
}