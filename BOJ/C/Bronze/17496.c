//https://www.acmicpc.net/problem/17496
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", (a - 1) / b * c * d);
	return 0;
}