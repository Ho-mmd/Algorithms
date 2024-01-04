//https://www.acmicpc.net/problem/19602
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, c, re;
	scanf("%d%d%d", &a, &b, &c);
	re = a + 2 * b + 3 * c;
	if (re >= 10)
		printf("happy");
	else
		printf("sad");

	return 0;
}