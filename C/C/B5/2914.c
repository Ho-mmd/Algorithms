//https://www.acmicpc.net/problem/2914
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (b - 1) * a + 1);

	return 0;
}