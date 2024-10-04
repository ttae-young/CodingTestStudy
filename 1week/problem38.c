// # 2차원으로 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int num_list[], size_t num_list_len, int n) 
{
    int a = num_list_len / n;
    int** answer = (int**)malloc(a*sizeof(int*));
    
    for (int i = 0; i < a; i++)
    {
        answer[i] = (int*)malloc(n * sizeof(int));  
    }

    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            answer[i][j] = num_list[i*n+j];
        }
    }

    return answer;
}