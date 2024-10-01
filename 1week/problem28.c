// # Â¦¼öÀÇ ÇÕ

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    for (int i = 1; i * 2 <= n; i++)
        answer += i * 2;
    return answer;
}