// # 한 번만 등장한 문자

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* s)
{
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    int count[26] = { 0 };
    int a = 0;

    const char alpha[] =
    {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
        'w', 'x', 'y', 'z'
    };

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == alpha[j])
            {
                count[j] += 1;
            }
        }
    }
    for (int t = 0; t < 26; t++)
    {
        if (count[t] == 1)
            answer[a++] = alpha[t];
    }
    answer[a] = '\0';

    return answer;
}