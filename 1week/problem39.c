// # 공 던지기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int numbers[], size_t numbers_len, int k) 
{
    int answer = 0;
    int index = (2 * (k - 1)) % numbers_len;

    answer = numbers[index];
    return answer;
}