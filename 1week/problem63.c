// # 문자열 계산하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int solution(const char* my_string) 
{
    int answer = 0;
    char* str = strdup(my_string);
    char* token = strtok(str, " ");

    int cur = 0;
    char oper = '+';
    
    while(token != NULL)
    {
        cur = atoi(token);

        if (isdigit(token[0]))
        {
            if (oper == '+')
            {
                answer += cur;
            }
            else if (oper = '-')
            {
                answer -= cur;
            }
        }
        else
        {
            oper = token[0];
        }
   
        token = strtok(NULL, " ");
    }

    return answer;
}