// # 구슬을 나누는 경우의 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long combination(int n, int r) {

    if (r > n - r) {
        r = n - r;
    }

    long long result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int solution(int balls, int share) {
    if (share == 0 || balls == share) {
        return 1;
    }

    return (int)combination(balls, share);
}
