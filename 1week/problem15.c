// # ÇÇÀÚ ³ª´² ¸Ô±â (3)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = (n + (slice -1))/ slice;
    return answer;
}