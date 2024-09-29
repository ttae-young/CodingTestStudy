// # 문자열 뒤집기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* my_string) {
    int length = 0;
    char* answer = (char*)malloc(sizeof(char));

    length = strlen(my_string);

    for (int i = 0; i < length; i++)
    {
        answer[i] = my_string[length - 1 - i];
    }
    answer[length] = '\0';

    return answer;
}