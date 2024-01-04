//https://www.acmicpc.net/problem/15727
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, temp1 = 0;
	scanf("%d", &a);
	if (a < 5) {
		printf("1");
	}
	else {
		temp1 = a / 5;
		if (a % 5 != 0)
			temp1 += 1;
		printf("%d", temp1);
	}

	return 0;
}