// # 연속된 수의 합

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) 
{
    int start = (total - (num * (num - 1)) / 2) / num;
    
    int* answer = (int*)malloc(sizeof(int)*num);

    for (int i = 0; i < num; i++)
    {
        answer[i] = start + i;
    }
    
    return answer;
}