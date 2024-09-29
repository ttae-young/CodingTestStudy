// # 아이스 아메리카노

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    
    int a[2];
    a[0] = money / 5500;
    a[1] = money % 5500;

    int* answer = (int*)malloc(sizeof(int));

    answer[0] = a[0];
    answer[1] = a[1];

    return answer;
}