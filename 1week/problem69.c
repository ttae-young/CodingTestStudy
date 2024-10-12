// # 문자열안에 문자열

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* str1, const char* str2)
{
    int answer = 0;

    if (strstr(str1, str2) != 0)
        answer = 1;
    else
        answer = 2;

    return answer;
}