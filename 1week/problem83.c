// # 삼각형의 완성조건 (2)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int sides[], size_t sides_len)
{
    int answer = 0;
    int short_side = sides[0] < sides[1] ? sides[0] : sides[1];
    int long_side = sides[0] > sides[1] ? sides[0] : sides[1];
    
    for(int i=long_side+1;i<short_side+long_side;i++)
    {
        answer++;
    }

    for (int i = 0; i <= long_side; i++)
    {
        if (i + short_side > long_side)
        {
            answer++;
        }
    }
    
    return answer;
}