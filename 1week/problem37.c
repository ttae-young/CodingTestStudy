// # 점의 위치 구하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int dot[], size_t dot_len) {
    int answer = 0;
    
    if (dot[0] >= 0)
    {
        if (dot[1] >= 0)
            answer = 1;
        else
            answer = 4;
    }
    else
    {
        if (dot[1] >= 0)
            answer = 2;
        else
            answer = 3;
    }

    return answer;
}