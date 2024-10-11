// # 숫자 찾기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) 
{
    int answer = 0;
    char str[7];
    sprintf(str, "%d", num);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] - '0' == k)
            return answer = i+1;          
    }

    return -1;
}