// # 안전지대
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int** board, size_t board_rows, size_t board_cols)
{
    int answer = 0;

    for (int i = 0; i < board_rows; i++)
    {
        for (int j = 0; j < board_cols; j++)
        {
            if (board[i][j] == 1)
            {
                for (int li = -1; li <= 1; li++)
                {
                    for (int lj = -1; lj <= 1; lj++)
                    {
                        int ni = i + li;
                        int nj = j + lj;
                        
                        if (ni >= 0 && ni < board_rows && nj >= 0 && nj < board_cols)
                        {
                            if(board[ni][nj] == 0)
                                board[ni][nj] = -1;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < board_rows; i++)
    {
        for (int j = 0; j < board_cols; j++)
        {
            if (board[i][j] == 0)
                answer++;
        }
    }
    return answer;
}