// # 중복된 문자 제거

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* my_string)
{
    int len = strlen(my_string);

    char* answer = (char*)malloc(sizeof(char)*len);
    
    int a = 0;

    for (int i = 0; i < len; i++)
    {
        int dup = 0;

        for (int j = 0; j < i; j++)
        {
            if (my_string[i] == my_string[j])
            {
                dup = 1;
                break;
            }
        }
        if (!dup)
        {
            answer[a++] = my_string[i];
        }
    }
    answer[a] = '\0';
    
    return answer;
}