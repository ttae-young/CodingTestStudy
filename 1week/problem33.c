// # 개미 군단

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;

    answer += hp / 5;
    hp %= 5;

    answer += hp / 3;
    hp %= 3;

    answer += hp / 1;


    return answer;
}
