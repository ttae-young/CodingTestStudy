// # 진료 순서 정하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int emergency[], size_t emergency_len)
{
    int* answer = (int*)malloc(sizeof(int) * emergency_len);

    for (int i = 0; i < emergency_len; i++)
    {
        int a = 1;

        for (int j = 0; j < emergency_len; j++)
        {
            if (emergency[i] < emergency[j])
                a++;
        }
        answer[i] = a;
    }

    return answer;
}
