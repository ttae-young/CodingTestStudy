// # 컨트롤 제트

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* s)
{
    int answer = 0;
    int nums[100];
    int t = -1;

    char* token = strtok(strdup(s), " ");

    while(token != NULL)
    {
        if (strcmp(token, "Z") == 0)
        {
            if (t >= 0)
                t--;
        }
        else
        {
            nums[++t] = atoi(token);

        }

        token = strtok(NULL, " ");
    }
    for (int i = 0; i <= t; i++)
    {
        answer += nums[i];
    }
    
    return answer;
}