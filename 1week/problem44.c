// # ÆÑÅä¸®¾ó

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    int factorial = 1;

    for (int i = 1; i <= 10; i++)
    {
        factorial *= i;
        if (factorial > n)
        {
            factorial /= i;
            break;
        }
        answer++;
    }

    return answer;
}