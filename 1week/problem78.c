// # 캐릭터의 좌표

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len)
{
    int* answer = (int*)malloc(sizeof(int)*board_len);
    answer[0] = 0;
    answer[1] = 0;

    int x_lim = board[0] / 2;
    int y_lim = board[1] / 2;

    for (size_t i = 0; i < keyinput_len; i++)
    {
        if (strcmp(keyinput[i], "up") == 0)
        {
            if(answer[1] < y_lim)
                answer[1]++;
        }
        else if (strcmp(keyinput[i], "down") == 0)
        {
            if(answer[1] > -y_lim)
                answer[1]--;
        }
        else if (strcmp(keyinput[i], "left") == 0)
        {
            if(answer[0] > -x_lim)
                answer[0]--;
        }
        else if (strcmp(keyinput[i], "right") == 0)
        {
            if(answer[0] < x_lim)
                answer[0]++;
        }

    }

    return answer;
}