// # 소인수분해

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int n)
{
    int* answer = (int*)malloc(n*sizeof(int));
    int index = 0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int a = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    a = 0;
                    break;
                }
            }
            if (a == 1)
            {
                answer[index++] = i;
            }
        }
    }
    return answer;
}