// # 모스부호(1)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* letter)
{
    char* answer = (char*)malloc(sizeof(char) * (strlen(letter)));

    int a = 0;
    char* word = strtok(letter, " ");

    while (word != NULL)
    {
        if (strcmp(word, ".-") == 0)
            answer[a++] = 'a';
        else if (strcmp(word, "-...") == 0)
            answer[a++] = 'b';
        else if (strcmp(word, "-.-.") == 0)
            answer[a++] = 'c';
        else if (strcmp(word, "-..") == 0)
            answer[a++] = 'd';
        else if (strcmp(word, ".") == 0)
            answer[a++] = 'e';
        else if (strcmp(word, "..-.") == 0)
            answer[a++] = 'f';
        else if (strcmp(word, "--.") == 0)
            answer[a++] = 'g';
        else if (strcmp(word, "....") == 0)
            answer[a++] = 'h';
        else if (strcmp(word, "..") == 0)
            answer[a++] = 'i';
        else if (strcmp(word, ".---") == 0)
            answer[a++] = 'j';
        else if (strcmp(word, "-.-") == 0)
            answer[a++] = 'k';
        else if (strcmp(word, ".-..") == 0)
            answer[a++] = 'l';
        else if (strcmp(word, "--") == 0)
            answer[a++] = 'm';
        else if (strcmp(word, "-.") == 0)
            answer[a++] = 'n';
        else if (strcmp(word, "---") == 0)
            answer[a++] = 'o';
        else if (strcmp(word, ".--.") == 0)
            answer[a++] = 'p';
        else if (strcmp(word, "--.-") == 0)
            answer[a++] = 'q';
        else if (strcmp(word, ".-.") == 0)
            answer[a++] = 'r';
        else if (strcmp(word, "...") == 0)
            answer[a++] = 's';
        else if (strcmp(word, "-") == 0)
            answer[a++] = 't';
        else if (strcmp(word, "..-") == 0)
            answer[a++] = 'u';
        else if (strcmp(word, "...-") == 0)
            answer[a++] = 'v';
        else if (strcmp(word, ".--") == 0)
            answer[a++] = 'w';
        else if (strcmp(word, "-..-") == 0)
            answer[a++] = 'x';
        else if (strcmp(word, "-.--") == 0)
            answer[a++] = 'y';
        else
            answer[a++] = 'z';

        word = strtok(NULL, " ");
    }
    answer[a++] = '\0';


    return answer;
}

