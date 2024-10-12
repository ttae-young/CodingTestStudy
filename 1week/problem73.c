// 7�� ����

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int array[], size_t array_len)
{
    int answer = 0;

    for (size_t i = 0; i < array_len; i++)
    {
        int num = array[i];

        while (num > 0)
        {
            if (num % 10 == 7)
                answer++;
            num /= 10;
        }
    
    }

    return answer;
}