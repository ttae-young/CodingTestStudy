// #  모음 제거

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* my_string)
{
    int len = strlen(my_string);
    int a = 0;
    char* answer = (char*)malloc(sizeof(char*)*(len+1));
    for (int i = 0; i < len; i++)
    {
        switch (my_string[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            break;
        default:
            answer[a++] = my_string[i];
        }
    }
    answer[a] = '\0';

    return answer;
}