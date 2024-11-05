// # kÀÇ °³¼ö

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int i, int j, int k) {
    int answer = 0;
    char compare = k + '0';

    for (int t = i; t <= j; t++)
    {
        char digit[7];
        sprintf(digit, "%d", t);

        for (int a=0; a < strlen(digit); a++)
        {
            if (digit[a] == compare)
            {
                answer++;
            }
        }

    }
    return answer;
}