// # 저주의 숫자 3

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool condition(int i)
{
    if (i % 3 == 0)
        return true;
    while (i > 0)
    {
        if (i % 10 == 3)
            return true;
        i /= 10;
    }
    return false;
}


int solution(int n)
{
    int count = 0;
    int current = 0; 

    while (count < n)
    {
        current++;
        if (!condition(current))
            count++;
    }

    return current;
}