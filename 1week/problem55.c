// # 암호 해독

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* cipher, int code)
{
    int len = strlen(cipher);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    int a = 0;

    for (int i = code -1; i < len; i+= code)
    {
        answer[a++] = cipher[i];
    }

    answer[a] = '\0';

    return answer;
}