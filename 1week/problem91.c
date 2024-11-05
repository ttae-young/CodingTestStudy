// # ¿Ë¾ËÀÌ (1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* babbling[], size_t babbling_len)
{
    int answer = 0;
    char* word[4] = { "aya", "ye", "woo", "ma" };

    for (int i = 0; i < babbling_len; i++)
    {
        int len = strlen(babbling[i]);
        int index = 0;
        
        while (index < len)
        {
            bool found = false;

            for (int j = 0; j < 4; j++)
            {
                int word_len = strlen(word[j]);
                if (strncmp(babbling[i]+ index, word[j], word_len) == 0)
                {
                    index += word_len;
                    found = true;
                    break;
                }
            }
            if (!found)
                break;
        }
        if (index == len)
            answer++;
    }

    return answer;
}