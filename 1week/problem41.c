// # 주사위 개수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int box[], size_t box_len, int n)
{
    int answer = 0;
    int x, y, z;

    x = box[0] / n;
    y = box[1] / n;
    z = box[2] / n;
    
    answer = (int)x * (int)y * (int)z;

    return answer;
}