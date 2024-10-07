// # 삼각형의 완성조건 (1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) 
{
    int answer = 0;
    int length[10];
    int temp;

    for (int i = 0; i < sides_len - 1; i++)
    {
        for (int j = 1; j < sides_len; j++)
        {
            if (sides[i] > sides[j])
            {
                temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }
    if (sides[sides_len - 1] < (sides[sides_len - 2] + sides[sides_len - 3]))
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }

    return answer;
}