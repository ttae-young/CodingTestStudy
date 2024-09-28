// # 배열의 평균값

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double solution(int numbers[], size_t numbers_len) {
    double sum = 0;
    
    for (int i = 0; i < numbers_len; i++) 
    {
        sum += numbers[i];
    }

    double answer = sum / numbers_len;
    return answer;
}