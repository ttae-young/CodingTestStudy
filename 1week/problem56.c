// # 대문자와 소문자

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


char* solution(const char* my_string) 
{
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    int a = 0;

    for (int i = 0; i < len; i++)
    {
        if (isupper(my_string[i]))
        {
            answer[a++] = tolower(my_string[i]);
        }
        else if(islower(my_string[i]))
        {
            answer[a++] = toupper(my_string[i]);
        }
    }
    answer[a] = '\0';

    return answer;
}