// # ¼û¾îÀÖ´Â ¼ıÀÚÀÇ µ¡¼À (2)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* my_string)
{
    int answer = 0;
    int temp = 0;
    int len = strlen(my_string);


    for (int i = 0; i < len; i++)
    {
        if (isdigit(my_string[i]))
        {
            temp = temp * 10 + (my_string[i] - '0');
        }
        else
        {
            answer += temp;
            temp = 0;
        }

    }

    answer += temp;

    return answer;
}