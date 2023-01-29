//https://www.acmicpc.net/problem/14924
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", c / (a * 2) * b);

	return 0;
}