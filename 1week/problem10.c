// # 중앙값 구하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len)
{

    int temp;

    for (int i = 0; i < array_len; i++)
    {
        for (int j = 0; j < array_len; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    int answer = array[array_len / 2];
    return answer;
}