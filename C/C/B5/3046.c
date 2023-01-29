//https://www.acmicpc.net/problem/3046
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d", b * 2 - a);

	return 0;
}