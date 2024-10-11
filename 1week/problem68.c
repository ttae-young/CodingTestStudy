// # OXДыБо

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char** solution(const char* quiz[], size_t quiz_len) 
{
    char** answer = (char**)malloc(sizeof(char*)*quiz_len);
    
    for (size_t i = 0; i < quiz_len; i++)
    {
        int x, y, z;
        char oper, equal;
        sscanf(quiz[i], "%d %c %d %c %d", &x, &oper, &y, &equal, &z);
        
        int result = 0;

        if (oper == '+')
        {
            result = x + y;
        }
        else if (oper == '-')
        {
            result = x - y;
        }

        if (result == z)
        {
            answer[i] = (char*)malloc(2);
            answer[i] = "O";
        }
        else
        {
            answer[i] = (char*)malloc(2);
            answer[i] = "X";
        }

    }

    return answer;
}