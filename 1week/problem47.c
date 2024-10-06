// # ¼û¾îÀÖ´Â ¼ıÀÚÀÇ µ¡¼À (1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int solution(const char* my_string)
{
    int answer = 0;
    int len = strlen(my_string);
    
    for (int i = 0; i < len; i++)
    {
        if (isdigit(my_string[i]))
        {
            answer += my_string[i] - '0';
        }
    }

    return answer;
}