// # ÇÇÀÚ ³ª´² ¸Ô±â (2)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int lcm = 0;

    for (int i = 6 * n; i >= 1; i--)
    {
        if (i % n == 0 && i % 6 == 0)
            lcm = i;
    }
    int answer = lcm / 6;

    return answer;
}