// # 옷가게 할인 받기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAN 10000

int solution(int price) 
{
    if (price >= 50 * MAN)
    {
        price -= (price * 0.2);
    }
    else if (price >= 30 * MAN)
    {
        price -= (price * 0.1);
    }
    else if (price >= 10 * MAN)
    {
        price -= (price * 0.05);
    }
    else
        price *= 1;

    int answer = price;

    return answer;
}