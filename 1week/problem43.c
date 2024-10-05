// # 최댓값 만들기 (1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len)
{
    int answer = 0;
    int temp;

    for (int i = 0; i < numbers_len-1; i++)
    {
        for (int j = i + 1; j < numbers_len; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    answer = numbers[numbers_len-1] * numbers[numbers_len - 2];

    return answer;
}