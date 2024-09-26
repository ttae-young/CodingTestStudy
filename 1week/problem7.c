// # 분수의 덧셈

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int denominator = denom1 * denom2; 
    int numerator = numer1 * denom2 + numer2 * denom1;
    int gcd;

    for(int i=1; i <= numerator && i <= denominator; i++){
        if(numerator % i ==0 && denominator % i == 0)
            gcd = i;
    }

    denominator /= gcd;
    numerator /= gcd;


    int* answer = (int*)malloc(sizeof(int));
    answer[0] = numerator;
    answer[1] = denominator;
    return answer;
}