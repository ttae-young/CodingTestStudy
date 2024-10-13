// # 다항식 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* polynomial)
{
    char temp[100];
    int x_sum = 0;
    int con_sum = 0;
    char* token;
    
    strcpy(temp, polynomial);

    token = strtok(temp, " ");

    while (token != NULL)
    {
        if (strchr(token,'x'))
        {
            int coef = 1;
            if (strlen(token) > 1)
            {
                sscanf(token, "%dx", &coef);
            }
            x_sum += coef;
        }
        else if (strcmp(token, "+") != 0)
        {
            int con;
            sscanf(token, "%d", &con);
            con_sum += con;
        }
        token = strtok(NULL, " ");
    }

    char* answer = (char*)malloc(sizeof(char)*50);
    
    if (x_sum == 0 && con_sum != 0)
    {
        sprintf(answer, "%d", con_sum);
    }
    else if (x_sum != 0 && con_sum == 0)
    {
        if (x_sum == 1)       
            sprintf(answer, "x");
        else
            sprintf(answer, "%dx", x_sum);
    }
    else
    {
        if (x_sum == 1)
            sprintf(answer, "x + %d", con_sum);
        else
            sprintf(answer, "%dx + %d", x_sum, con_sum);
    }
    

    return answer;
}