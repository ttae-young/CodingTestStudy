// # 369∞‘¿”

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order)
{
    int answer = 0;
    char a[20];

    sprintf(a, "%d", order);


    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '3' || a[i] == '6' || a[i] == '9')
        {
            answer++;
        }
    }

    return answer;
}

