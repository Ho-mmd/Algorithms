//https://www.acmicpc.net/problem/20254
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", 56 * a + 24 * b + 14 * c + 6 * d);

	return 0;
}