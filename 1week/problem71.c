// # ¼¼±Õ Áõ½Ä

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) 
{
    int answer = 0;
    for (int i = 0; i < t; i++)
    {
        n *= 2;
    }

    answer = n;

    return answer;
}