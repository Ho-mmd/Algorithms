//https://www.acmicpc.net/problem/2845
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f, g;
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
	int tot = a * b;
	printf("%d %d %d %d %d", c - tot, d - tot, e - tot, f - tot, g - tot);
	return 0;
}