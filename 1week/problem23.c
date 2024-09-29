// # Â¦¼ö È¦¼ö °³¼ö

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int num_list[], size_t num_list_len)
{
    int* answer = (int*)malloc(sizeof(int));
    int even_num = 0;
    int odd_num = 0;

    for (int i = 0; i < num_list_len; i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even_num++;
        }
        else
        {
            odd_num++;
        }
    }

    answer[0] = even_num;
    answer[1] = odd_num;

    return answer;
}