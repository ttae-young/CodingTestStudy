// # 특이한 정렬

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int numlist[], size_t numlist_len, int n)
{
    int* answer = (int*)malloc(sizeof(int)*numlist_len);


    for (int i = 0; i < numlist_len; i++)
    {
        answer[i] = numlist[i];
    }
    

    for (int i = 0; i < numlist_len-1; i++)
    {
        for (int j = i+1;j < numlist_len; j++)
        {
            int distance1 = abs(answer[i] - n);
            int distance2 = abs(answer[j] - n);

            if (distance1 == distance2 && answer[i]<answer[j] || distance1 > distance2)
            { 
                int temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }

    return answer;
}