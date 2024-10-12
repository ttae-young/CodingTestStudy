// # 제곱수 판별하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;

    for (int i = 1; i < n; i++)
    {
        if (i * i == n)
            return answer = 1;
    }

    return answer = 2;
}