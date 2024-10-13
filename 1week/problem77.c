// # 직사각형 넓이

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


int solution(int** dots, size_t dots_rows, size_t dots_cols)
{
    int answer = 0;

    int wid = fabs(dots[0][0] - dots[1][0]);
    if (wid == 0)
        wid = fabs(dots[0][0] - dots[2][0]);


    int hei = fabs(dots[0][1] - dots[1][1]);
    if (hei == 0)
        hei = fabs(dots[0][1] - dots[2][1]);


    answer = hei * wid;

    return answer;
}