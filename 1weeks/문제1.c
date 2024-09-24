//# 두 수의 합
#include <stdio.h>

int main(){
	int num1, num2;
	int result;
	scanf_s("%d %d", &num1, &num2);
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
	return 0;
	}