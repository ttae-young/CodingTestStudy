// # A로 B 만들기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* before, const char* after) 
{
    int char_count[26] = { 0 };
    int len = strlen(before);
    for (int i = 0; i < len; i++)
    {
        char_count[before[i] - 'a']++;
    }

    for (int i = 0; i < len; i++)
    {
        char_count[after[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (char_count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}