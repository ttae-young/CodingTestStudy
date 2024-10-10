#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int array[], size_t array_len)
{
    int* answer = (int*)malloc(sizeof(int));
    int max = 0;
    int a = 0;
    
    for (int i = 0;i < array_len; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            a = i;
        }
    }

    answer[0] = max;
    answer[1] = a;

    return answer;
}