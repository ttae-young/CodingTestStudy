// # 이진수 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* bin1, const char* bin2) 
{
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    int len = len1 > len2 ? len1 : len2;
    char* answer = (char*)malloc(len + 2);


    int carry = 0, i = len1 - 1, j = len2 - 1, k = len;
    answer[len + 1] = '\0';
    
    while (i >= 0 || j >= 0 || carry)
    {
        int bit1 = (i >= 0) ? bin1[i--] - '0' : 0;
        int bit2 = (j >= 0) ? bin2[j--] - '0' : 0;
        
        int sum = bit1 + bit2 + carry;
        answer[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }
    
    return answer + k + 1;
}