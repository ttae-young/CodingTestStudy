// # 문자열 정렬하기 (1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int* solution(const char* my_string)
{
    int len = strlen(my_string);
    int a = 0;
    int temp;

    int* answer = (int*)malloc(sizeof(int)*len);

    for (int i = 0; i < len; i++)
    {
        if (isdigit(my_string[i]))
        {
            answer[a++] = my_string[i]-'0';
        }
    }
    
    for (int n = 0; n < a-1; n++)
    {
        for (int m = n+1 ; m < a; m++)
        {
            if (answer[n] > answer[m])
            {
                temp = answer[n];
                answer[n] = answer[m];
                answer[m] = temp;
            }
        }
    }

    return answer;
}