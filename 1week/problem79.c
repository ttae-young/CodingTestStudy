// # 최댓값 만들기 (2)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int numbers[], size_t numbers_len)
{
    int answer = -100000000;
    int value = 0;

    for (int i = 0; i < numbers_len-1; i++)
    {
        for (int j = i + 1; j < numbers_len;j++)
        {
            value = numbers[i] * numbers[j];
            if (answer < value)
                answer = value;
        }
    }

    return answer;
}