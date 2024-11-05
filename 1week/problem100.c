// # 다음에 올 숫자

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int common[], size_t common_len)
{
    int answer = 0;
    int d = common[1] - common[0];

    if (d == common[2] - common[1])
    {
        answer = common[common_len - 1] + d;
    }
    else
    {
        int r = common[1] / common[0];
        answer = common[common_len - 1] * r;
    }
    return answer;
}