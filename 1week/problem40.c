// # 배열 회전시키기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int numbers[], size_t numbers_len, const char* direction) 
{
    int* answer = (int*)malloc(sizeof(int)*numbers_len);
    
    if (strcmp(direction, "right") == 0)
    {
        answer[0] = numbers[numbers_len-1];
        for (int i = 1; i < numbers_len; i++)
        {
            answer[i] = numbers[i - 1];
        }
    }
    else
    {
        answer[numbers_len-1] = numbers[0];
        for (int i = 0; i < numbers_len-1; i++)
        {
            answer[i] = numbers[i+1];
        }
    }
   
    
    return answer;
}