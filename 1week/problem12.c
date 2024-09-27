// # Â¦¼ö´Â ½È¾î¿ä

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) 
{
    scanf("%d", &n);
    int* answer = (int*)malloc(sizeof(int));
    int index = 0;
    for (int i = 0; i <= n; i++) 
    {
        if (i % 2 != 0) 
        {
            answer[index] = i;
            index++;
        }
    }
    return answer;
}