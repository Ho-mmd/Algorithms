//https://www.acmicpc.net/problem/14470
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a > 0) {
		printf("%d", (b - a) * e);
	}
	else {
		printf("%d", -a * c + d + b * e);
	}
	return 0;
}