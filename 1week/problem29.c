// # 배열 자르기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int numbers[], size_t numbers_len, int num1, int num2)
{
    int* answer = (int*)malloc(sizeof(int) * numbers_len);
    int a = 0;

    for (int i = num1; i <= num2; i++)
    {
        answer[a++] = numbers[i];
    }

    return answer;
}