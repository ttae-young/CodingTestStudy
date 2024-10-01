// # 특정 문자 제거하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* my_string, const char* letter) {
    int length = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*length);
    int a = 0;
    for (int i = 0; i < length; i++)
    { 
        
        if (my_string[i] != letter[0])
            answer[a++] = my_string[i];

    }
    answer[a] = '\0';

    return answer;
}