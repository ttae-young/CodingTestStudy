// # 등수 매기기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int** score, size_t score_rows, size_t score_cols)
{
    int* answer = (int*)malloc(sizeof(int)*score_rows);
    double averages[score_rows];

    for (size_t i = 0; i < score_rows; i++)
    {  
        averages[i] = (score[i][0] + score[i][1]) / 2.0;        
    }
    
    for (size_t i = 0; i < score_rows; i++)
    {
        int rank = 1;
        for (size_t j = 0; j < score_rows; j++)
        {
            if (averages[i] < averages[j])
                rank++;
        }
        answer[i] = rank;
    }

    return answer;
}