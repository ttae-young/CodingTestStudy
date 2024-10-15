// # 외계어 사전

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len)
{
    for (int i = 0; i < dic_len; i++)
    {
        bool found = true;
        
        for (int j = 0; j < spell_len; j++)
        {
            if (strchr(dic[i], spell[j][0]) == NULL)
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return 1;
        }
    }
    
    return 2;
}