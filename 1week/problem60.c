// # 약수 구하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) 
{    
    int* answer = (int*)malloc(sizeof(int)*n);
    int a = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer[a++] = i;
        }
    }
    
    return answer;
}