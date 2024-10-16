// # 유한소수 판별하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int solution(int a, int b)
{
    int g = gcd(a, b);
    b /= g;

    while (b != 1)
    {
        if (b % 2 == 0)
        {
            b /= 2;
        }
        else if (b % 5 == 0)
        {
            b /= 5;
        }
        else
        {
            return 2;
        } 
    }
    return 1;
}