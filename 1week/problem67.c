// # 자릿수 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    int dis = 0;

    while (n > 0)
    {
        dis = n % 10;
        n /= 10;
        answer += dis;
    }


    return answer;
}