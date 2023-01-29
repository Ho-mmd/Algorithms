//https://www.acmicpc.net/problem/17256
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d %d %d", d - c, e / b, f - a);

	return 0;
}