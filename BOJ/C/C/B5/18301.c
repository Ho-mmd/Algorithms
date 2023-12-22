//https://www.acmicpc.net/problem/18301
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", (a + 1) * (b + 1) / (c + 1) - 1);

	return 0;
}