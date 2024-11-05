// # 로그인 성공

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols)
{
    char* answer = (char*)malloc(sizeof(char) * 9);
    for (int i = 0; i < db_rows; i++)
    {
        if (strcmp(id_pw[0], db[i][0]) == 0)
        {
            if (strcmp(id_pw[1], db[i][1]) == 0)
            {
                answer = "login";
                return answer;
            }
            else
            {
                answer = "wrong pw";
                return answer;
            }
        }

    }
    answer = "fail";
    return answer;
}
