// # ∆Ú«‡

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int** dots, size_t dots_rows, size_t dots_cols) 
{
    double inclination1 = (double)(dots[0][1] - dots[1][1] )/ (dots[0][0] - dots[1][0]);
    double inclination2 = (double)(dots[2][1] - dots[3][1]) / (dots[2][0] - dots[3][0]);

    if ((dots[0][0] - dots[1][0] == 0) && (dots[2][0] - dots[3][0] == 0))
        return 1;
    if ((dots[0][0] - dots[1][0] == 0) || (dots[2][0] - dots[3][0] == 0))
        return 0;

    if (inclination1 == inclination2)
        return 1;

    inclination1 = (double)(dots[0][1] - dots[2][1]) / (dots[0][0] - dots[2][0]);
    inclination2 = (double)(dots[1][1] - dots[3][1]) / (dots[1][0] - dots[3][0]);

    if ((dots[0][0] - dots[2][0] == 0) && (dots[1][0] - dots[3][0] == 0))
        return 1;
    if ((dots[0][0] - dots[2][0] == 0) || (dots[1][0] - dots[3][0] == 0))
        return 0;

    if (inclination1 == inclination2)
        return 1;

    inclination1 = (double)(dots[0][1] - dots[3][1]) / (dots[0][0] - dots[3][0]);
    inclination2 = (double)(dots[1][1] - dots[2][1]) / (dots[1][0] - dots[2][0]);

    if ((dots[0][0] - dots[3][0] == 0) && (dots[1][0] - dots[2][0] == 0))
        return 1;
    if ((dots[0][0] - dots[3][0] == 0) || (dots[1][0] - dots[2][0] == 0))
        return 0;

    if (inclination1 == inclination2)
        return 1;

    return 0;
}