// # 순서쌍의 개수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int a = 1; a * a <= n; a++)
    {
        if (n % a == 0)
        {
            answer++;
            if (a != n / a)
                answer++;
        }
    }
        
    return answer;
}