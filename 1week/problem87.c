// # 겹치는 선분의 길이

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** lines, size_t lines_rows, size_t lines_cols)
{
    int answer = 0;
    int map[201] = { 0 };

    for (int i = 0; i < lines_rows; i++)
    {
        int start = lines[i][0];
        int end = lines[i][1];

        for (int j = start; j < end; j++)
        {
            map[j + 100]++;
        } 
    }
    for (int i = 0; i < 201; i++)
    {
        if (map[i] > 1)
            answer++;
    }

    return answer;
}