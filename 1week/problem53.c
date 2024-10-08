// # 가까운 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int array[], size_t array_len, int n)
{
    int answer = array[0];

    for (int i = 0; i < array_len; i++)
    {
        int cur = (n - array[i] >= 0) ? (n - array[i]) : (array[i] - n);
        int dif = (n - answer >= 0) ? (n - answer) : (answer - n);

        if (cur < dif)
            answer = array[i];
        else if (cur == dif && answer > array[i])
            answer = array[i];
    }

    return answer;
}


