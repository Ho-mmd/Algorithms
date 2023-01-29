//https://www.acmicpc.net/problem/23825
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b, re;
	scanf("%d%d", &a, &b);
	a = a / 2;
	b = b / 2;
	re = a < b ? a : b;
	printf("%d", re);

	return 0;
}